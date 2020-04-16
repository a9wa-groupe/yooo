#include "Delegation.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
Delegation::Delegation() : points(0),niveau(0),nb_de_but(0),nb_de_carton_rouge(0),nb_de_carton_jaune(0)
{
    cout<<"donner le nom de la Nation :"<<endl;
    cin>>nom;
    int x;
    cout<<"donner le niveau de cette delegation ( 1-2-3-4 )"<<endl;
    cin>>niveau;
    cout<<"donner le nbre de joueur"<<endl;
    cin>>x;
    for ( int i=0 ; i<x;i++)
    {
        Joueur z=Joueur();
        joueurlist.push_back(z);
    }
    cout<<"donner le nbre de staff";
    cin>>x;
    for ( int i=0 ; i<x;i++)
    {
        Staff z=Staff(nom);
        stafflist.push_back(z);
    }
}

void Delegation::ajouter_joueur()
{
    Joueur z=Joueur();
    joueurlist.push_back(z);
}

void Delegation::ajouter_staff()
{
    Staff s=Staff(nom);
    stafflist.push_back(s);

}

void Delegation::afficher_noms_des_joueurs()
{
    for (int i=0;i<joueurlist.size();i++)
    {
        cout<<i<<" "<<joueurlist[i].nom<<endl;
    }
}

void Delegation::afficher_noms_des_staff()
{
    for (int i=0;i<joueurlist.size();i++)
    {
        cout<<i<<" "<<stafflist[i].nom<<endl;
    }
}
void Delegation::modifier_joueur()
{
    Delegation::afficher_noms_des_joueurs();
    cout<<"donner le numero du joueur a modifier"<<endl;
    int x;
    cin>>x;
    joueurlist[x].Joueur::modifier();

}
void Delegation::modifier_staff()
{
    Delegation::afficher_noms_des_staff();
    cout<<"donner le numero du staff a modifier"<<endl;
    int x;
    cin>>x;
    stafflist[x].Staff::modifier();

}
void Delegation::supprimer_joueur()
{
    Delegation::afficher_noms_des_joueurs();
    cout<<"donner le numero du joueur a supprimer"<<endl;
    int x;
    cin>>x;
    joueurlist.erase(joueurlist.begin() + x);



}

void Delegation::supprimer_staff()
{
    Delegation::afficher_noms_des_staff();
    cout<<"donner le numero du staff a supprimer"<<endl;
    int x;
    cin>>x;
    stafflist.erase(stafflist.begin() + x);


}


void Delegation::ajout_des_buts(int i)
{
    nb_de_but+=i;
}
void Delegation::ajout_des_cartons_rouge(int i)
{
    nb_de_carton_rouge+=i;
}
void Delegation::ajout_des_cartons_jaune(int i)
{
    nb_de_carton_jaune+=i;
}
void Delegation::ajout_de_points(int i)
{
    points +=i;
}
string Delegation::getnom()
{
    return nom;
}
