#ifndef MATCH_H
#define MATCH_H
#include "Delegation.h"
using namespace std;
class Match
{   friend class Groupe;
    friend class Competition;
    private:
        Delegation equipe1,equipe2;
        int information[6]; /*case1 pour les buts de l'equipe1 case 2 nbr carton jaune de l'equipe1 case 3 nbr carton rouge de l'equipe1
                            case4 pour les buts de l'equipe2 case 5 nbr carton jaune de l'equipe2 case 6 nbr carton rouge de l'equipe2*/
    public:
        Match();
        Match(Delegation,Delegation);
        void jouer();
        void afficher_information();
        Delegation resultat();



};

#endif // MATCH_H
