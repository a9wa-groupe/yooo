#include "Groupe.h"
#include <iostream>
#include "Match.h"
using namespace std;
Groupe::Groupe()
{}

void Groupe::jouergroupe()
{ for (int i ; i<6;i++)
     matchs[i].Match::jouer();
}
void Groupe::classer ()
 {

    Delegation d ;

    for(int i=0;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(classement[i].points<classement[j].points)
            {
                d=classement[i];
                classement[i]=classement[j];
                classement[j]=d;

                }
        }
        }
}
void Groupe :: afficherleclassment ()
 { for (int i;i<4;i++)
      cout<<i<<"l'equipe est : " <<classement[i].getnom()<<endl ;
 }

