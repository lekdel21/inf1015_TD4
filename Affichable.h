#pragma once
#include <iostream>

using namespace std;

class Affichable
{
public:
	Affichable() :couleur_(0) {}
	Affichable(int couleur) { couleur_ = couleur; }
	virtual ~Affichable() = default;
	virtual void afficher(ostream& os) const = 0;
	virtual void changerCouleur(int couleur) = 0;
	int getCouleur() const { return couleur_; }
	void setCouleur(int couleur) { couleur_ = couleur; }
private:
	int couleur_;
};