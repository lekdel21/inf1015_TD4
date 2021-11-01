#pragma once
#include "Personnage.h"
#include <string>
#include <iostream>

class Vilain : public Personnage
{
public:
	Vilain()=default;
	Vilain(const Personnage& vilain, const string& objectif) : vilain_(vilain), objectif_(objectif) {}
	Vilain(const Vilain& vilain) { vilain_ = vilain.vilain_; objectif_ = vilain.objectif_; }
	void afficher(ostream& os) const { vilain_.afficher(cout); os << "Objectif: " << objectif_ << endl;}

	Personnage getVilain() const { return vilain_; }
	string getObjectif() const { return objectif_; }
private:
	Personnage vilain_;
	string objectif_;
};