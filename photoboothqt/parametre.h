#ifndef PARAMETRE_H
#define PARAMETRE_H

#include <QDialog>

namespace Ui {
class parametre;
}

class parametre : public QDialog
{
    Q_OBJECT

public:
    explicit parametre(QWidget *parent = nullptr);
    ~parametre();

private:
    Ui::parametre *ui;
    QString para;

private slots:
    void valider();
    void noir();
    void blanc();

signals :
    void noir(QString);
    void blanc(QString);
};

#endif // PARAMETRE_H
