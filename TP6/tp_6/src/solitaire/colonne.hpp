#ifndef _COLONNE_HPP_
#define _COLONNE_HPP_

#include <vector>
#include "carte.hpp"


class Colonne : public Plateau {

	private:
		std::vector<Carte> cartes;
		
	public: 
	  bool estVide() { return (cartes.size() == 0); }
	  int getTaille() { return cartes.size(); }
	  Carte * getSommet() { return cartes.begin(); }
	  Carte * getCarte(int pos) { cartes.at(pos);}
	  void ajouter(Main & main) {}
	  void ajouter(Carte * carte) {}
	  void retirer(int pos, Main & main) {}
 
};
