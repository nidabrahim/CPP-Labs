#ifndef _CROUPIER_HPP_
#define _CROUPIER_HPP_

#include "paquet.hpp"
#include "plateau.hpp"
#include "carte.hpp"
#include "pioche.hpp"
#include "colonne.hpp"

class Croupier {
	
	public:
		virtual melanger(Paquet paquet) = 0;
		distribuer(Paquet paquet, Plateau plateau){
			
			paquet.reinitialiser();
			for(int i=0; i<7;++i){
				Colonne colonne = plateau.getColonne(i);
				for(int j=0;j<i+1;++j){
					colonne.ajouter(paquet.getSuivante());
				}
			}
			Pioche pioche = plateau.getPioche();
			while(!(Carte * carte = paquet.getSuivante())){
				pioche.ajouter(carte);
			}
		}
};

#endif
