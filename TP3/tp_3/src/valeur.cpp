#include "valeur.hpp"

	
Valeur::Valeur(double v):nombre(v)
{
}

double Valeur::getNombre() const{
	
	return nombre;
}

void Valeur::setNombre(double n){
		
	nombre = n;
}
