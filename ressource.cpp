#include "ressource.h"
#include "creneau.h"
#include <iostream>

Ressource::Ressource(std::string m_nom)
{
    //m_ = new QPushButton("Pimp mon bouton !", this);
    m_listCreneau = new QVector<Creneau*>;
    std::cout << m_nom << " is created\n";

}

void Ressource::parler()
{
    std::cout<<"J'existe\n";
}

void Ressource::ajoutCreneau(Creneau &unCreneau )
{
    std::cout<<"une creneau a ete ajoute\n";
    m_listCreneau->push_back(&unCreneau);
    std::cout<<"la liste de creneau comporte "<<m_listCreneau->length()<<" element(s)";

}

