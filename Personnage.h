#pragma once
#include <string>
#include "Affichable.h"

using namespace std;

class Personnage : public Affichable
{
public:
	Personnage() : nom_("Unknown"), titreJeu_("Unknown") {}
	Personnage(const string& nom, const string& titreJeu) { nom_ = nom; titreJeu_ = titreJeu; }
	void afficher(ostream& os) const override { os << "Nom: " << nom_ << endl << "Parution: " << titreJeu_ << endl; }
	void changerCouleur(ostream& os, int couleur) override { os << "\033[" << couleur << "m";}

	string getNom() const { return nom_; }
	string getJeu() const { return titreJeu_; }

private:
	string nom_;
	string titreJeu_;
};