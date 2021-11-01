#pragma once
#include "Personnage.h"
#include <vector>
#include <string>
#include <iostream>

class Heros : public Personnage
{
public:
	Heros(const Personnage& hero, const string& ennemi, vector<Personnage> allies) : heros_(hero), allies_(allies), ennemi_(ennemi) {}
	void afficher(ostream& os) const;
private:
	Personnage heros_;
	vector<Personnage> allies_;
	string ennemi_;
};

void Heros::afficher(ostream& os) const
{
	heros_.afficher(cout);
	os << "Ennemi: " << ennemi_ << endl << "Allies: " << endl;
	for (auto&& allie : allies_)
		os << allie.getNom() << endl;
}