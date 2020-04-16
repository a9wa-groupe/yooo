#ifndef DELEGATION_H
#define DELEGATION_H
#include <vector>
#include <iostream>
#include "Staff.h"
#include "Joueur.h"

using namespace std;


class Delegation
{
    friend class Match;
    friend class Groupe;
    private:
        string nom;
        vector<Staff> stafflist;
        vector<Joueur> joueurlist;
        int points,niveau,nb_de_but,nb_de_carton_rouge,nb_de_carton_jaune;
    public:
        Delegation();
        void ajouter_joueur();
        void ajouter_staff();
        void modifier_joueur();
        void modifier_staff();
        void supprimer_joueur();
        void supprimer_staff();
        void afficher_noms_des_joueurs();
        void afficher_noms_des_staff();
        void ajout_des_buts(int);
        void ajout_des_cartons_rouge(int);
        void ajout_des_cartons_jaune(int);
        void ajout_de_points(int);
        string getnom();
};

#endif // DELEGATION_H
