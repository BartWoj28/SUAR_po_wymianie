#include "dialogconnection.h"
#include "ui_dialogconnection.h"

DialogConnection::DialogConnection(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogConnection)
{
    ui->setupUi(this);
}

DialogConnection::~DialogConnection()
{
    delete ui;
}




void DialogConnection::on_wybor_currentTextChanged(const QString &arg1)
{
    if(arg1=="klient")
    {
        ui->adres1->setEnabled(true);
        ui->adres2->setEnabled(true);
        ui->adres3->setEnabled(true);
        ui->adres4->setEnabled(true);
        czy_adres=true;
    }
    else
    {
        ui->adres1->setEnabled(false);
        ui->adres2->setEnabled(false);
        ui->adres3->setEnabled(false);
        ui->adres4->setEnabled(false);
        czy_adres=false;


    }
}


void DialogConnection::on_DialogConnection_accepted()
{
    if(czy_adres)adres=QString::number(ui->adres1->value())+"."+QString::number(ui->adres2->value())+"."+QString::number(ui->adres3->value())+QString::number(ui->adres4->value());
    port=ui->port->value();
    czyPolacz=true;
}


void DialogConnection::on_DialogConnection_finished(int result)
{
    Q_UNUSED(result);
    deleteLater();
}

