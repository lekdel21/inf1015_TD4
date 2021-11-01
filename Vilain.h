#pragma once
#include "Personnage.h"
#include <string>
#include <iostream>

class Vilain : public Personnage
{
public:
	Vilain(const Personnage& vilain, const string& objectif) : vilain_(vilain), objectif_(objectif) {}
	void afficher(ostream& os) const { vilain_.afficher(cout); os << "Objectif: " << objectif_ << endl;}
private:
	Personnage vilain_;
	string objectif_;
};