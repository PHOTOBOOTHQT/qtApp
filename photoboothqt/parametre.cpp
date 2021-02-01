#include "parametre.h"
#include "ui_parametre.h"

parametre::parametre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parametre)
{
    ui->setupUi(this);

    connect(ui->BTN_valider,SIGNAL(clicked()),SLOT(valider()));
    connect(ui->BTN_noir, SIGNAL(clicked()),SLOT(noir()));
    connect(ui->BTN_blanc, SIGNAL(clicked()),SLOT(blanc()));
}

parametre::~parametre()
{
    delete ui;
}
void parametre::valider(){
    parametre::close();
}
void parametre::noir(){
    parametre::setStyleSheet("QDialog { background-color : rgb(64,64,64) } QLabel { color : white}");
    para ="QMainWindow { background-color : rgb(64,64,64) } QPushButton { background-color : white } QLCDNumber { background-color : white } QLCDNumber { border-color : white }";
    emit noir(para);
}
void parametre::blanc(){
    parametre::setStyleSheet("QDialog { background-color : rgb(204,204,204) } QLabel { color : black}");
}
