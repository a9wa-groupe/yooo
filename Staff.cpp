#include "Staff.h"
#include <iostream>
using namespace std;

void Staff::afficher()

{
    cout<<"Son nom est "<<nom<<"son prenom "<<prenom<<"Son travail "<<travail<<endl;
	cout<<"et il est de "<<delegation<<endl;
}

void Staff::modifier()
{
    cout<<"pour modifier le nom taper 1"<<endl;
	cout<<"pour modifier le prenom taper 2"<<endl;
	cout<<"pour modifier le travail taper 3"<<endl;
	cout<<"pour tout changer taper 4 "<<endl;
	int x;
	cin>>x;

	string y;
	switch(x)
	{
		case 1:
			cout<<"quel est le nouveau nom"<<endl;
			cin>>y;
			nom = y;
			break;
		case 2:

			cout<<"quel est le nouveau prenom"<<endl;
			cin>>y;
			prenom = y;
			break;
		case 3:

			cout<<"quel est le nouveau travail"<<endl;
			cin>>y;
			travail = y;
			break;
		case 4:

			cout<<"quel est le nouveau nom"<<endl;
			cin>>y;
			nom = y;
			cout<<"quel est le nouveau prenom"<<endl;
			cin>>y;
			prenom = y;
			cout<<"quel est le nouveau travail"<<endl;
			cin>>y;
			travail = y;
			break;

		default:
			cout<<"erreur";
	}
}
   Staff::Staff(string d): delegation(d)
{
    string y;
	cout<<"quel est le nom du staff"<<endl;
	cin>>y;
	nom = y;

	cout<<"quel est le prenom staff"<<endl;
	cin>>y;
	prenom = y;

	cout<<"quel est le travail"<<endl;
	cin>>y;
	travail = y;
}
