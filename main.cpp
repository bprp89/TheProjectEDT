#include <QApplication>
#include "mafenetre.h"
#include "ressource.h"
#include "creneau.h"
#include <iostream>
#include "planifieur.h"

int main(int argc, char *argv[])
{
    std::cout << "le code est lance\n";
    QApplication app(argc, argv);
    Planifieur planificateur;

    std::string strBertrand = "Bertrand";
    std::string strMaPuce ="Mapuce";
    std::string strSixela = "Sixela";
    std::string strLun = "Lundi8h";
    Ressource Prof1(strBertrand);
    Ressource Prof2(strMaPuce);
    Ressource Prof3("Sixela");//prof de folie
    Prof1.parler();

    //Creneau Cren1(strLun);
    //Cren1.ajoutRessource(Prof1);
    QVector <Ressource*> ressourceARanger(3);
    ressourceARanger.push_back(&Prof1);
    ressourceARanger.push_back(&Prof2);
    ressourceARanger.push_back(&Prof3);

    planificateur.agencer(ressourceARanger,strLun);

    MaFenetre fenetre;

    //Prof1.ajoutCreneau(Cren1);



    fenetre.show();


    return app.exec();
}
/*Le but de la V0.1 est de fournir un algo qui:
 *  -crée un emploi du temps prédifini
 *  -plusieurs personnel ou prof
 *  -une classe unique dont s'occupe les personnels
 *
 *
 *
 *
 *
 */
