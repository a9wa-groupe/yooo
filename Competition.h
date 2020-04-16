#ifndef Competition_H
#define Competition_H
#include <iostream>
#include "Match.h"
#include "Groupe.h"
using namespace std;

class Competition
{    private:
        Groupe phasedegroupe [8];
        Match huitiemedefinale[8];
        Match quartdefinale[4];
        Match demifinale[2];
        Match finale ;
    public:
        Competition();
        void huitiemedefinales();
        void quartdefinales();
        void demifinales();
        void matchclassment();
        void finales();
        void resgroupe();
        void reshuitiemedefinale();
        void resquartdefinale();
        void resdemifinale();
        void resmatchdeclassment();
        void resfinale();
        void toutlesres ();
        void afficherresgroupe();
};

#endif// Competition_H
