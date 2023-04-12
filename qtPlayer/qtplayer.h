#pragma once

#include <QtWidgets/QWidget>
#include "ui_qtplayer.h"

class qtPlayer : public QWidget
{
    Q_OBJECT

public:
    qtPlayer(QWidget *parent = nullptr);
    ~qtPlayer();

private:
    Ui::qtPlayerClass *ui;
};
