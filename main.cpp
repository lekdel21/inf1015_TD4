#include <fstream>
#include "bibliotheque_cours.hpp"
#include "Affichable.h"
#include "Personnage.h"
#include "Heros.h"
#include "Vilain.h"
#include "VilainHeros.h"
#include <memory>
#include <iostream>
#include <string>
#include <vector>

using UInt8  = uint8_t;
using UInt16 = uint16_t;

UInt8 lireUint8(std::istream& fichier)
{
	UInt8 valeur = 0;
	fichier.read(reinterpret_cast<char*>(&valeur), sizeof(valeur));
	return valeur;
}

UInt16 lireUint16(std::istream& fichier)
{
	UInt16 valeur = 0;
	fichier.read(reinterpret_cast<char*>(&valeur), sizeof(valeur));
	return valeur;
}

std::string lireString(std::istream& fichier)
{
	std::string texte;
	texte.resize(lireUint16(fichier));
	fichier.read(reinterpret_cast<char*>(&texte[0]), std::streamsize(sizeof(texte[0])) * texte.length());
	return texte;
}

using namespace std;

int main()
{
	#pragma region "Bibliothèque du cours"
	// Permet sous Windows les "ANSI escape code" pour changer de couleur
	// https://en.wikipedia.org/wiki/ANSI_escape_code ; les consoles Linux/Mac
	// les supportent normalement par défaut.
	bibliotheque_cours::activerCouleursAnsi();
	#pragma endregion
	
	// Trait de separation
	static const string trait =
		"═════════════════════════════════════════════════════════════════════════";

	// Ouverture des fichiers binaires
	ifstream fichierHeros("heros.bin", ios::binary);
	ifstream fichierVilains("vilains.bin", ios::binary);
	fichierHeros.exceptions(ios::failbit);
	fichierVilains.exceptions(ios::failbit);

	//TODO: Votre code pour le main commence ici
	vector<string> allies = { "perso1", "perso2", "perso3" };
	Vilain kung("Kung fu panda", "Les aventures de tintin", "Tuer Tintin");
	Heros tintin("Tintin", "Les aventures de Tintin", "Kung Fu Panda", allies);
	kung.changerCouleur(cout, 91);
	kung.afficher(cout);
	tintin.changerCouleur(cout, 92);
	tintin.afficher(cout);
	cout << "-------" << endl;
	VilainHeros perso(tintin, kung);
	perso.changerCouleur(cout, 0);
	perso.afficher(cout);
	//Heros tintin_(tintin, kung_.getVilain().getNom(), allies);
	//tintin_.afficher(cout);
	//VilainHeros vH(tintin_, kung_);

	//vH.afficher(cout);
}