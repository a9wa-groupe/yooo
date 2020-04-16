#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <string>
using namespace std;
class Staff
{
    friend class Delegation;
    friend class Match;
    public:
        Staff(string);
        void afficher();
        void modifier();

    private:
        string nom,prenom,travail,delegation;

};

#endif// STAFF_H
