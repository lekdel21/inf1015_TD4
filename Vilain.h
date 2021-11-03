#pragma once
#include "Personnage.h"
#include <string>
#include <iostream>

class Vilain : public virtual Personnage
{
public:
	Vilain()=default;
	Vilain(const string& nom, const string& titreJeu, const string& objectif) : Personnage(nom, titreJeu), objectif_(objectif) {}
	void afficher(ostream& os) const { Personnage::afficher(os); os << "Objectif: " << objectif_ << endl;}

	string getObjectif() const { return objectif_; }
private:
	string objectif_;
};