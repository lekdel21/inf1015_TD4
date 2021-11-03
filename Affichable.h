#pragma once
#include <iostream>

using namespace std;

class Affichable
{
public:
	Affichable() = default;
	virtual ~Affichable() = default;
	virtual void afficher(ostream& os) const = 0;
	virtual void changerCouleur(ostream& os, int couleur) = 0;
};