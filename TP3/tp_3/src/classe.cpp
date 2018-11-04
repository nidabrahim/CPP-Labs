#include "classe.hpp"


Classe::Classe(double bi, double bs, double q):borneInf(bi),borneSup(bs),quantite(q){}

double Classe::getBorneInf() const{

	return borneInf;
}

double Classe::getBorneSup() const{

	return borneSup;
}

double Classe::getQuantite() const{
	
	return quantite;
}

void Classe::setBorneInf(double bi){
	
	borneInf = bi;
}

void Classe::setBorneSup(double bs){
	
	borneSup = bs;
}

void Classe::setQuantite(double q){
	
	quantite = q;
}

void Classe::ajouter(){
	
	quantite++;
}
/*
bool Classe::operator<(const Classe& op){
	
	return this->borneInf <= op.borneInf;
}
*/
