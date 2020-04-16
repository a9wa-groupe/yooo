#ifndef GROUPE_H
#define GROUPE_H
#include <iostream>
#include <vector>
#include "Match.h"
#include "Delegation.h"
using namespace std;

class Groupe
{ friend class Competition;

    public:
        Groupe();
        void classer() ;
        void afficherleclassment() ;
        void jouergroupe();
    private:
        Delegation classement[4];
        Match matchs[6];
};

#endif// GROUPE_H
