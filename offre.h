#ifndef OFFRE_H
#define OFFRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class offre
{
public:
  offre();
  offre(int,QString,QString,QString);
    QString get_depart();
    QString get_destination();
     QString get_libelle();
    int get_id();
    bool ajouter();
    QSqlQueryModel * recherche(const QString &);
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier(int );
private:
    QString depart,destination,libelle;
    int id;
};

#endif // OFFRE_H
