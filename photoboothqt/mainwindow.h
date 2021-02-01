#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dbal.h>
#include <parametre.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    DBAL *bdd;
    parametre *myDialog;

private slots:
    void FNT_parametre();
    void photo();
    void valider();
    void annuler();
    void retourpara(QString);
};
#endif // MAINWINDOW_H
