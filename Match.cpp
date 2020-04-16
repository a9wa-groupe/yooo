#include "Match.h"
#include "Delegation.h"
using namespace std;
Match::Match()
{

}

Match::Match(Delegation d1,Delegation d2) : equipe1(d1),equipe2(d2)
{
    int i;
    for (i = 0; i < 6; i++)
        information[i] = 0;
}
void Match::jouer()
{
    cout<<"donner le score de ce match ( mettez le svp de la forme nb de but pour l'equipe1 puis espace puis nb de but de l'equipe2"<<endl;
    cin>>information[0];
    cin>>information[3];
    if ( information[0] > 0 )
        equipe1.Delegation::ajout_des_buts(information[0]);
    if ( information[3] > 0 )
        equipe1.Delegation::ajout_des_buts(information[3]);
    if ( information[0] > information[3])
        equipe1.Delegation::ajout_de_points(3);
    if ( information[0] < information[3])
        equipe2.Delegation::ajout_de_points(3);
    else
    {
        equipe2.Delegation::ajout_de_points(1);
        equipe1.Delegation::ajout_de_points(1);
    }
    cout<<"combien donner le nombre de carton jaune qu'il y a eu dans ce match pour la 1iere equipe "<<endl;
    int x,j;
    cin>>x;
    information[1]=x;
    equipe1.ajout_des_cartons_jaune(x);
    for (int i=0;i<x;i++)
    {
        equipe1.afficher_noms_des_joueurs();
        cout<<"donner le numero du "<<i<<"ieme joueur qui a pris une carton jaune"<<endl;
        cin>>j;
        equipe1.joueurlist[j].ajouter_carton_jaune(1);
    }
    cout<<"combien donner le nombre de carton jaune qu'il y a eu dans ce match pour la 2ieme equipe"<<endl;
    cin>>x;
    information[4]=x;
    equipe2.ajout_des_cartons_jaune(x);
    for (int i=0;i<x;i++)
    {
        equipe2.afficher_noms_des_joueurs();
        cout<<"donner le numero du "<<i<<"ieme joueur qui a pris une carton jaune"<<endl;
        cin>>j;
        equipe2.joueurlist[j].ajouter_carton_jaune(1);
    }
    cout<<"combien donner le nombre de carton rouge qu'il y a eu dans ce match pour la 1iere equipe"<<endl;

    cin>>x;
    information[2]=x;
    equipe1.ajout_des_cartons_rouge(x);
    for (int i=0;i<x;i++)
    {
        equipe1.afficher_noms_des_joueurs();
        cout<<"donner le numero du "<<i<<"ieme joueur qui a pris une carton rouge"<<endl;
        cin>>j;
        equipe1.joueurlist[j].ajouter_carton_rouge(1);
    }
    cout<<"combien donner le nombre de carton rouge qu'il y a eu dans ce match pour la 2ieme equipe"<<endl;

    cin>>x;
    information[5]=x;
    equipe2.ajout_des_cartons_rouge(x);
    for (int i=0;i<x;i++)
    {
        equipe2.afficher_noms_des_joueurs();
        cout<<"donner le numero du "<<i<<"ieme joueur qui a pris une carton rouge"<<endl;
        cin>>j;
        equipe2.joueurlist[j].ajouter_carton_rouge(1);
    }
}
void Match::afficher_information()
{
    cout<<"le score de ce match est"<<information[0]<<"\t"<<information[3]<<endl;
    cout<<"la premiere equipe a eu "<<information[1]<<"carton jaune et "<<information[2]<<"carton rouge"<<endl;
    cout<<"la deuxieme equipe a eu "<<information[1]<<"carton jaune et "<<information[2]<<"carton rouge"<<endl;
}
Delegation Match::resultat()
{
    if (information[0]>information[3])
        return equipe1;
    else
        return equipe2;
}
