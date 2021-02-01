#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myDialog = new parametre();

    connect(ui->BTN_parametre,SIGNAL(clicked()),this,SLOT(FNT_parametre()));
    connect(ui->BTN_photo,SIGNAL(clicked()),this,SLOT(photo()));
    connect(ui->BTN_valider,SIGNAL(clicked()),this,SLOT(valider()));
    connect(ui->BTN_annuler,SIGNAL(clicked()),this,SLOT(annuler()));
    connect(myDialog,SIGNAL(noir(QString)),this,SLOT(retourpara(QString)));
    connect(myDialog,SIGNAL(blanc(QString)),this,SLOT(retourpara(QString)));

    ui->BTN_valider->hide();
    ui->BTN_annuler->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete myDialog;
}
void MainWindow::FNT_parametre(){
    myDialog->exec();
}
void MainWindow::photo(){
    ui->BTN_valider->show();
    ui->BTN_annuler->show();
}
void MainWindow::valider(){
    ui->BTN_valider->hide();
    ui->BTN_annuler->hide();
}
void MainWindow::annuler(){
    ui->BTN_valider->hide();
    ui->BTN_annuler->hide();
}
void MainWindow::retourpara(QString para){
    MainWindow::setStyleSheet(para);
}
