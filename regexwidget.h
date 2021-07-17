/*
* Copyright (C) 2021  Shadai Rafael Lopez Garcia
* This program comes with ABSOLUTELY NO WARRANTY;
* This is free software, and you are welcome to redistribute it
* under certain conditions, see <https://www.gnu.org/licenses/>.
*/
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
