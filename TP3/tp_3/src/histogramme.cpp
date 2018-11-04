#include "histogramme.hpp"
#include <iostream>

Histogramme::Histogramme(double bi, double bs, int n){
	
	double amplitude = (bs-bi)/n;
	
	double j=bi;
	for(int i=0; i<n; ++i){
		classes.insert(Classe(j,j+amplitude));
		j+=amplitude;
	}
	/*Histogramme::classes_t::const_iterator itr = classes.begin();
	while(itr != classes.end()){
		std::cout << itr->getBorneInf() << " " << itr->getBorneSup() << " ; "; ++itr;
	}*/
}
	
std::set<Classe> Histogramme::getClasses(){
	
	return classes;
}

void Histogramme::ajouter(const Echantillon & e){
	
	echantillon = e;
	for(int i=0; i<e.getTaille(); i++){
		int j=0;
		while(j<(int)classes.size() && (e.getValeur(i).getNombre()<classes.find(j)->getBorneInf() || e.getValeur(i).getNombre()>=classes.find(j)->getBorneSup())) j++;
		if(j!=(int)classes.size()){
			//double q = classes.find(j)->getQuantite();
			//classes.find(j)->setQuantite(q+1);
			//classes.find(j)->ajouter();
		}
	}
}


 bool operator< (const Classe & op1, const Classe & op2)
{
    return  op1.getBorneInf() < op2.getBorneInf();
}
