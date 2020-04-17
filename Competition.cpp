
#include <iostream>
#include "Competition.h"
#include "Match.h"
using namespace std;

Competition::Competition()

{   for (int i;i<8;i++)
      { Groupe g ;
        cout<<"Donner le groupe "<<i<<":"<<endl ;
        phasedegroupe[i]=g;
        phasedegroupe[i].Groupe::jouergroupe();

      }
}
void Competition::huitiemedefinales()
{   for (int i ; i<8;i++)
        {phasedegroupe[i].Groupe::classer() ; }

    huitiemedefinale[0]=Match(phasedegroupe[0].classement[0],phasedegroupe[1].classement[1]);
    huitiemedefinale[1]=Match(phasedegroupe[0].classement[1],phasedegroupe[1].classement[0]);
    huitiemedefinale[2]=Match(phasedegroupe[2].classement[0],phasedegroupe[3].classement[1]);
    huitiemedefinale[3]=Match(phasedegroupe[2].classement[1],phasedegroupe[3].classement[0]);
    huitiemedefinale[4]=Match(phasedegroupe[4].classement[0],phasedegroupe[5].classement[1]);
    huitiemedefinale[5]=Match(phasedegroupe[4].classement[1],phasedegroupe[5].classement[0]);
    huitiemedefinale[6]=Match(phasedegroupe[6].classement[0],phasedegroupe[7].classement[1]);
    huitiemedefinale[7]=Match(phasedegroupe[6].classement[1],phasedegroupe[7].classement[0]);
    for (int i;i<8;i++)
        huitiemedefinale[i].Match::jouer();
}
void Competition::quartdefinales()
{
    quartdefinale[0]=Match(huitiemedefinale[0].Match::resultat(), huitiemedefinale[1].Match::resultat());
    quartdefinale[1]=Match(huitiemedefinale[2].Match::resultat(), huitiemedefinale[3].Match::resultat());
    quartdefinale[2]=Match(huitiemedefinale[4].Match::resultat(), huitiemedefinale[5].Match::resultat());
    quartdefinale[3]=Match(huitiemedefinale[6].Match::resultat(), huitiemedefinale[7].Match::resultat());
    for (int i;i<4;i++)
        quartdefinale[i].Match::jouer();
}
void Competition::demifinales()
{  demifinale[0]=Match(quartdefinale[1].Match::resultat(),quartdefinale[0].Match::resultat());
   demifinale[1]=Match(quartdefinale[2].Match::resultat(),quartdefinale[3].Match::resultat());
   for (int i ;i<2;i++)
     demifinale[i].Match::jouer();
}

void Competition::finales ()
   {finale=Match(demifinale[0].Match::resultat(),demifinale[1].Match::resultat()) ;
    finale.Match::jouer();}
void Competition::afficherresgroupe()
{
    for (int i ;i<8;i++)
        {cout<<"classment de gourpe n:"<<i<<endl;
        phasedegroupe[i].Groupe::afficherleclassment() ;}
}
void Competition::reshuitiemedefinale()
 { for (int i ; i<8 ; i++)
     { cout<<"resultat de huitieme de finale n:"<<i<<endl ;
       huitiemedefinale[i].Match::afficher_information();
     }

 }
void Competition::resquartdefinale()
{ for (int i ; i<4 ; i++)
     { cout<<"resultat de quart de finale n:"<<i<<endl ;
       quartdefinale[i].Match::afficher_information();
     }

 }
void Competition::resdemifinale()
{ for (int i ; i<2 ; i++)
     { cout<<"resultat de demi  finale n:"<<i<<endl ;
       demifinale[i].Match::afficher_information();
     }

 }
void Competition::resfinale()
{  finale.Match::afficher_information();

}
