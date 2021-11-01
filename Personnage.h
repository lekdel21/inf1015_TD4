#pragma once
#include <string>
#include "Affichable.h"

using namespace std;

class Personnage : public Affichable
{
public:
	Personnage() : Affichable(0), nom_("Unknown"), titreJeu_("Unknown") {}
	Personnage(string nom, string titreJeu, int couleur) : Affichable(couleur) { nom_ = nom; titreJeu_ = titreJeu; }
	void afficher(ostream& os) const override { os << "\033[" << getCouleur() << "m" << "Nom: " << nom_ << endl << "Parution: " << titreJeu_ << endl; }
	void changerCouleur(int couleur) override { setCouleur(couleur); };

	string getNom() const { return nom_; }
	string getJeu() const { return titreJeu_; }

	void setNom(string nom) { nom_ = nom; }
	void setJeu(string jeu) { titreJeu_ = jeu; }
private:
	string nom_;
	string titreJeu_;
};