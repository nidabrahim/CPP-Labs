#ifndef _PIOCHE_HPP_
#define _PIOCHE_HPP_

#include<algorithm> 
#include "carte.hpp"


class Pioche : public Plateau {

	private:
		std::vector<Carte *> cartesCachees;
		std::vector<Carte *> cartesRetournees;
		
	public: 
	  bool rienRetourne() { return (cartesRetournees.size() == 0) ; }
	  bool toutRetourne() { return (cartesCachees.size() == 0); }
	  bool estVide() { return (cartes.size() == 0); }
	  Carte * getProchaine() { return cartesCachees.back(); }
	  Carte * getVisible() {
			return cartesRetournees.back();
	  }
	  void ajouter(Carte * carte){
		cartesCachees.push_back(carte);
	  }
	  bool tirer(){
		  if(!toutRetourne()){
			  Carte * carte = getProchaine();
			  cartesCachees.erase(carte);
			  cartesRetournees.push_back(carte);
			  return true;
		  }else return false;
	  }
	  
	  Carte * retirer(){
		  Carte * carte = getVisible();
		  cartesRetournees.erase(carte);
		  return carte;
	  }
 
};
