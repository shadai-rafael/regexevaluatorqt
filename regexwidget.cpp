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
    ui->setupUi(this);

    //seting default values to edit target line
    ui->targetEdit->setMaxLength(500);
    ui->targetEdit->setPlaceholderText("introduce a text");

    //seting default values to edit regex line
    ui->regexEdit->setMaxLength(300);
    ui->regexEdit->setPlaceholderText("introduce a regular expresion");

}

Widget::~Widget()
{
    delete ui;
}

