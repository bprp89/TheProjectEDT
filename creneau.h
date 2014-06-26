
#ifndef CRENEAU_H
#define CRENEAU_H

#include "ressource.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "qvector.h"
#include "iostream"

class Ressource;

class Creneau
{
public:
    Creneau(std::string m_nom);
    void ajoutRessource(Ressource &);
    /*void retireRessource(Ressource*, int numRessource);
    void const lireRessource(Ressource*,int numRessource);
    void const lireTteRessource();
    const int getLength();*/

protected:
    std::string m_nom;
    Ressource* m_classe;
    QVector<Ressource*>* m_listRessource;
};

#endif // CRENEAU_H
