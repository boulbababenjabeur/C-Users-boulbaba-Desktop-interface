#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QString>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pb_ajouter_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString pays= ui->lineEdit_pays->text();
   /* QPixmap pix("C:/Users/boulbaba/Desktop/photo");
    ui->image->setPixmap(pix.scaled(900,900,QT::KeepAspectRatio));*/
  compagnie  e(id,nom,pays);
  bool test=e.ajouter();
  if(test)
{ui->tabcompagnie->setModel(tmpcompagnie.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une comagnie"),
                  QObject::tr("compagnie ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un étudiant"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter_3_clicked()
{
    int id = ui->lineEdit_id_5->text().toInt();
    bool test=tmpcompagnie.supprimer(id);
    if(test)
    {ui->tabcompagnie->setModel(tmpcompagnie.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une compagnie"),
                    QObject::tr("Etudiant supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une compagnie"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_ajouter_2_clicked()
{
    int id = ui->id2->text().toInt();
        QString pays1= ui->pays1->text();
        QString nom1= ui->nom1->text();
        compagnie c1(id,pays1,nom1);
      bool test=c1.modifier(id);
      if(test)
    {ui->tabcompagnie->setModel(tmpcompagnie.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("modifier un compagnie"),
                      QObject::tr("modifier ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("modifier un compagnie"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_ajouter_4_clicked()
{
    int id = ui->id->text().toInt();
    QString depart= ui->depart->text();
    QString destination= ui->destination->text();
    QString libelle= ui->libelle->text();

  offre  o(id,depart,destination,libelle);
  bool test=o.ajouter();
  if(test)
{ui->taboffre->setModel(tmpoffre.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une offre"),
                  QObject::tr("offre ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une offre"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_ajouter_5_clicked()
{
    int id = ui->id2->text().toInt();
        QString depart1= ui->dep2->text();
        QString destination1= ui->des2->text();
         QString libelle1= ui->lib2->text();
        offre o1(id,depart1,destination1,libelle1);
      bool test=o1.modifier(id);
      if(test)
    {ui->taboffre->setModel(tmpoffre.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("modifier une offre"),
                      QObject::tr("modifier ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("modifier une offre"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_ajouter_6_clicked()
{
    int id = ui->id3->text().toInt();
    bool test=tmpoffre.supprimer(id);
    if(test)
    {ui->taboffre->setModel(tmpoffre.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une offre"),
                    QObject::tr("offre supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une offre "),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_pb_ajouter_7_clicked()
{
    QString str=ui->lineEdit_rechercher->text();
    ui->tabrechercher->setModel(tmpcomp.recherche(str));
}

void MainWindow::on_pb_ajouter_8_clicked()
{
    QString str=ui->lineEdit_rechercher_2->text();
    ui->taboffre_2->setModel(tmpoffre.recherche(str));
}
