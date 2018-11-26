#ifndef _DOCK_HPP_
#define _DOCK_HPP_

#include "carte.hpp"


class Dock : public Plateau {

	private:
		std::vector<Carte *> cartes;
		
	public: 
	  bool estVide() { return (cartes.size() == 0); }
	  Carte * getSommet() { return cartes.front(); }
	  void ajouter(Carte * carte) { cartes.push_back(carte); }
	  Carte * retirer(){
		 Carte * carte = getSommet();
		 cartes.erase(carte);
		 return carte;  
	  }
};
