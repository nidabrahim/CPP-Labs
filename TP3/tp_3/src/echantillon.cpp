#include "echantillon.hpp"
#include <stdexcept>


int Echantillon::getTaille() const{
	
	return valeurs.size(); 
}

void Echantillon::ajouter(const double &d){
	
	Valeur v(d);
	valeurs.push_back(v);
}

Valeur Echantillon::getMinimum(){
	
	if(getTaille() == 0) throw std::domain_error("Empty collection");
	
	double min = valeurs[0].getNombre();
	for (int i = 1; i<this->getTaille(); ++i) {
	  if (valeurs[i].getNombre()<min) min=valeurs[i].getNombre();
	}
    return Valeur(min);
}

Valeur Echantillon::getMaximum(){
	
	if(getTaille() == 0) throw std::domain_error("Empty collection");
	
	double max = valeurs[0].getNombre();
	for (int i = 1; i<this->getTaille(); ++i) {
	  if (valeurs[i].getNombre()>max) max=valeurs[i].getNombre();
	}
    return Valeur(max);
}

Valeur Echantillon::getValeur(int indice) const{
	
	if(indice < 0 || indice >= getTaille()) throw std::out_of_range("Out of range");
	return valeurs[indice];
}
