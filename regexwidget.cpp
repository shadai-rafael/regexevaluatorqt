/*
*   Copyright (C) 2021 Shadai Rafael Lopez Garcia
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "regexwidget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    reng = new RegexEngineSTD();
    ui->setupUi(this);

    //setting default values to edit target line
    ui->targetEdit->setMaxLength(500);
    ui->targetEdit->setPlaceholderText("introduce a text");

    //setting default values to edit regex line
    ui->regexEdit->setMaxLength(300);
    ui->regexEdit->setPlaceholderText("introduce a regular expresion");

    //setting default values to edit regex outcome
    ui->regexOutcome->setReadOnly(true);

    connect(ui->evaluate,&QPushButton::clicked,this,[&](){
        std::stringstream ss;
        reng->setRegex(ui->regexEdit->text().toStdString());
        reng->setTarget(ui->targetEdit->text().toStdString());
        auto matches = reng->obtainMatches();
        for (auto str : matches){
            ss<<str<<std::endl;
        }
        ui->regexOutcome->setPlaceholderText(QString::fromStdString(ss.str()));
    });

}

Widget::~Widget()
{
    delete ui;
    delete reng;
}

