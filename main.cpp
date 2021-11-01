#include "Affichabler.h"
#include "Personnage.h"
#include <memory>
#include <ostream>

using namespace std;

ostream& operator<<(ostream& out, const Personnage& perso)
{
	return out << "Nom: " << perso.nom_ << endl << "Parution: " << perso.titreJeu_ << endl;
}

int main()
{

}