#pragma once
#include "Heros.h"
#include "Vilain.h"
#include "Personnage.h"

class VilainHeros : public Heros, Vilain
{
public:
	VilainHeros(const Heros& heros, const Vilain& vilain) : Personnage(heros.getNom() + "-" + vilain.getNom(), heros.getJeu() + "-" + vilain.getJeu()), Heros("", "", heros.getEnnemi(), heros.getAllies()), Vilain("", "", vilain.getObjectif())
	{
		mission_ = vilain.getObjectif() + " dans le monde de " + heros.getJeu();
	}
	void afficher(ostream& os) const;
private:
	string mission_;
};

void VilainHeros::afficher(ostream& os) const
{
	Personnage::afficher(os);
	os << "Allies: " << endl;
	for (auto&& allie : getAllies())
		os << allie << endl;
	os << "Ennemi: " << getEnnemi() << endl;
	os << "Objectif: " << getObjectif() << endl;
	os << "Mission Speciale: " << mission_ << endl;
}