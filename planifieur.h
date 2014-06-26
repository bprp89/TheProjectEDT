#ifndef PLANIFIEUR_H
#define PLANIFIEUR_H

#include "creneau.h"
#include "ressource.h"
#include "qvector.h"

class Planifieur
{
public:
    Planifieur();
    void ajoutRessource(Ressource &);
    void agencer(QVector<Ressource *> listToCompute, std::string nomCreneau);

protected:

    QVector<Creneau>* m_listCreneau;

};

#endif // PLANIFIEUR_H
