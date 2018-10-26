#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include "Valeur.hpp"

class Echantillon {
private:
	std::vector<Valeur> valeurs;
	
	
public:

	/*typedef std::vector<Valeur>::iterator iterator;
	iterator begin();
	iterator end();*/

	int getTaille() const;
/*	void ajouter(const Valeur &v);
	Valeur getMinValeur();
	Valeur getMaxValeur();*/
	
};

#endif
