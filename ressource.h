#ifndef RESSOURCE_H
#define RESSOURCE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "qvector.h"
#include "iostream"

class Creneau;

class Ressource
{
public:
    Ressource(std::string m_nom);
    void ajoutCreneau(Creneau &);

    /*void retireCreneau(Creneau*);*/
    void parler();

protected:
    std::string m_nom;
    int m_nbrCreneau;
    QVector<Creneau*>* m_listCreneau;

};


#endif // RESSOURCE_H

