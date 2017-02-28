#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImgHandler.h"

class ImgHandler : public QMainWindow
{
    Q_OBJECT

public:
    ImgHandler(QWidget *parent = Q_NULLPTR);

private:
    Ui::ImgHandlerClass ui;
};
