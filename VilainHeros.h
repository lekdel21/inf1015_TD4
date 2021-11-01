#pragma once
#include "Heros.h"
#include "Vilain.h"

class VilainHeros : public Heros, Vilain
{
public:
	VilainHeros(const Heros& heros, const Vilain& vilain); 
	void afficher(ostream& os) const;
private:
	Personnage vilainHeros_;
	string mission_;
};

VilainHeros::VilainHeros(const Heros& heros, const Vilain& vilain)
{ 
	vilainHeros_.setNom(heros.getHeros().getNom() + "-" + vilain.getVilain().getNom()); 
	vilainHeros_.setJeu(heros.getHeros().getJeu() + "-" + vilain.getVilain().getJeu()); 
	mission_ = vilain.getObjectif() + " dans le monde de " + heros.getHeros().getJeu(); 
}

void VilainHeros::afficher(ostream& os) const
{
	os << "Nom: " << vilainHeros_.getNom() << endl;
	os << "Parution: " << vilainHeros_.getJeu() << endl;
	os << "Mission Speciale: " << mission_ << endl;
}