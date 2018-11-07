#include "valeur.hpp"

	
Valeur::Valeur(double v):nombre(v)
{
	etudiant = "inconnu";
}

Valeur::Valeur(const double v, const char * n):nombre(v),etudiant(n){}

double Valeur::getNombre() const{
	
	return nombre;
}

void Valeur::setNombre(double n){
		
	nombre = n;
}


double Valeur::getNote() const{
	
	return nombre;
}

string Valeur::getEtudiant() const{
	
	return etudiant;
}

void Valeur::setNote(const double d){
	
	nombre = d;
}

void Valeur::setEtudiant(const char * c){
	
	etudiant = c;
}
