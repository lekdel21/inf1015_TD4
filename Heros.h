#pragma once
#include "Personnage.h"
#include <vector>
#include <string>
#include <iostream>

class Heros : public Personnage
{
public:
	Heros() = default;
	Heros(const Personnage& heros, const string& ennemi, vector<Personnage> allies) : heros_(heros), allies_(allies), ennemi_(ennemi) {}
	Heros(const Heros& heros) { heros_ = heros.heros_; allies_ = heros.allies_; ennemi_ = heros.ennemi_; }
	void afficher(ostream& os) const;

	Personnage getHeros() const { return heros_; }
	string getEnnemi() const { return ennemi_; }
	vector<Personnage> getAllies() const { return allies_; }
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