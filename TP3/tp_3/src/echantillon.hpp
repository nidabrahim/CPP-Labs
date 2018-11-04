#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include "valeur.hpp"
#include <vector>

class Echantillon {
private:
	std::vector<Valeur> valeurs;
	
	
public:

	/*typedef std::vector<Valeur>::iterator iterator;
	iterator begin();
	iterator end();*/

	int getTaille() const;
	void ajouter(const Valeur &v);
	void ajouter(const double &d);
	Valeur getMinimum();
	Valeur getMaximum();
	Valeur getValeur(int indice) const;
	
};

#endif
