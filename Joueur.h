#ifndef JOUEUR_H
#define JOUEUR_H
#include <vector>
#include <iostream>
using namespace std;


class Joueur
{
   friend class Delegation;
   friend class Match;
    private:
        string nom,prenom;
        int Nb_carton_rouge,Nb_carton_jaune,Nb_but;
        vector<float> Notes; // premiere case pour la note moyenne et les autres pour les notes en details
    public:
        Joueur();
        void afficher_note_total();
        void afficher_notes();
        void afficher_info();
        int get_carton_rouge();
        int get_carton_jaune();
        int get_but();
        float get_note_total();
        void ajouter_carton_rouge(int);
        void ajouter_carton_jaune(int);
        void ajouter_but(int);
        void ajouter_note(int);
        void modifier();


};

#endif // JOUEUR_H
