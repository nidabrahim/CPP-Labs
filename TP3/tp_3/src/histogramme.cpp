#include "histogramme.hpp"
#include <iostream>
/*
Histogramme::Histogramme(double bi, double bs, int n){
	
	double amplitude = (bs-bi)/n;
	
	double j=bi;
	for(int i=0; i<n; ++i){
		classes.insert(Classe(j,j+amplitude));
		j+=amplitude;
	}
}
	
const std::set<Classe> &Histogramme::getClasses() const {
	return classes;
}

void Histogramme::ajouter(const Echantillon & e){
	for(int i=0; i<e.getTaille(); ++i){
		iterator it = classes.begin();
		while (it!=classes.end()) {
			if( e.getValeur(i).getNombre()>=it->getBorneInf() && e.getValeur(i).getNombre()<it->getBorneSup()){
					Classe c = *it;
					classes.erase(it);
					c.ajouter();
					classes.insert(c);
				}
			++it;
		}
	}
}

*/
 bool operator< (const Classe & op1, const Classe & op2)
{
    return  op1.getBorneInf() < op2.getBorneInf();
}

