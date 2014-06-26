#include "planifieur.h"

Planifieur::Planifieur()
{
}

//la fonction va ajouter la ressource en dur dans sa classe. Les creneaux pointeront toujours vers
// les différentes ressources. Ca va etre bien pour vérifier les dispo je pense.
void Planifieur::agencer(QVector<Ressource *> listToCompute, std::string nomCreneau)
{
    Creneau creneauCree(nomCreneau);//  Creation du creneau.
    //m_listCreneau->push_back(*creneauCree);

    int iteration=0;
    for(iteration=0;iteration<listToCompute.length();iteration++)
    {
        std::cout<<iteration;
        creneauCree.ajoutRessource(*listToCompute[iteration]);
        //listToCompute[iteration]->ajoutCreneau(creneauCree);
    }
}
