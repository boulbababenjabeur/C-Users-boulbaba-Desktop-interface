#include "connexion.h"
#include <QSqlError>
#include <QString>
Connexion::Connexion(){
                      }
bool Connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
                           db.setDatabaseName("Golden airlines");
                           db.setUserName("boulbaba");//inserer nom de l'utilisateur
                           db.setPassword("boulbaba");//inserer mot de passe de cet utilisateur

if (db.open())
    test=true;

else throw QString ("Erreur Paramétres"+db.lastError().text());
return  test;
}
void Connexion::fermerConnexion()
{db.close();}
