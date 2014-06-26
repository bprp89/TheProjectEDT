#include "creneau.h"
#include "ressource.h"



Creneau::Creneau(std::string m_nom)
{
    m_listRessource = new QVector<Ressource*>;
    std::cout<<"Je suis un creneau et je sers a faire l'emploi du temps\n";
    std::cout << m_nom << " is created\n";
}

void Creneau::ajoutRessource(Ressource &uneRessource)
{
    std::cout<<"une ressource a ete ajoute et dit :";
    uneRessource.parler();
    m_listRessource->push_back(&uneRessource);
    std::cout << "il y a "<< m_listRessource->length()<<" ressource dans ce creneau\n";
}


