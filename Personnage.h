#pragma once
#include <string>

using namespace std;

class Personnage
{
public:
	Personnage() : nom_("Unknown"), titreJeu_("Unknown") { ; }
	Personnage(string nom, string titreJeu) { nom_ = nom; titreJeu_ = titreJeu; }
	friend ostream& operator<< (ostream& out, const Personnage& perso);
private:
	string nom_;
	string titreJeu_;
};