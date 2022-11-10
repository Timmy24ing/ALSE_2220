#include "vantana.h"
#include "./ui_vantana.h"

vantana::vantana(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::vantana)
{
    ui->setupUi(this);
}

vantana::~vantana()
{
    delete ui;
}


void vantana::on_cmd_Operacion_clicked()
{
    if (ui->cbx_Operacion->currentIndex() == 0 ){

    }
}
