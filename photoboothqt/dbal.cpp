#include "dbal.h"

DBAL::DBAL()
{
    connectionBDD();

}
void DBAL::connectionBDD(){
    db = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL"));
        db->setHostName("127.0.0.1");
        db->setPort(3306);
        db->setUserName("root");
        db->setPassword("5MichelAnnecy");
        db->setDatabaseName("photoboothdb");
        db->open();
        if (!db->open("root", "5MichelAnnecy")) {
            err = db->lastError();
            emit err;
            }
        else{
            success = "BDD connection ok";
            emit success;
        }
}
