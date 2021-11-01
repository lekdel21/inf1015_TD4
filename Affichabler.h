#pragma once


using namespace std;

template <typename T>
class Affichable
{
public:
	Affichable() :couleur_(0){ ; }
	Affichable(int couleur) { couleur_ = couleur;}
	void afficher(const T& element) { cout << "\033[" << couleur_ << "m" << element; }
	void changerCouleur(int nb) : couleur_(nb) { ; }
private:
	int couleur_;
};