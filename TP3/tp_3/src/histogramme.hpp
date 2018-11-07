#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include "classe.hpp"
#include "echantillon.hpp"
#include <set>
#include <map>
#include <iostream>

template <class T = std::less<Classe>,class A = std::allocator<Classe>>
class Histogramme {
private:
	std::set<Classe,T,A> classes;
	Echantillon echantillon;
	std::multimap<Classe,Valeur> valeurs;
	
public:
	typedef typename std::set<Classe,T,A> classes_t;
	typedef std::multimap<Classe,Valeur> valeurs_t;
	typedef typename classes_t::const_iterator iterator;
	
	Histogramme(double bi, double bs, int n);
	Histogramme(const Histogramme<std::greater<Classe>> & h);
	
	const Echantillon &getEchantillon() const;
	const std::set<Classe,T,A> &getClasses() const;
	const std::multimap<Classe,Valeur> &getValeurs() const;
	void ajouter(const Echantillon & e);
	void ajouter(const double & d);
};


bool operator< (const Classe & op1, const Classe & op2);
bool operator> (const Classe & op1, const Classe & op2);
 
 template <class T,class A>
 Histogramme<T,A>::Histogramme(double bi, double bs, int n){
	
	double amplitude = (bs-bi)/n;
	
	double j=bi;
	for(int i=0; i<n; ++i){
		classes.insert(Classe(j,j+amplitude));
		j+=amplitude;
	}
}

template <class T,class A>
Histogramme<T,A>::Histogramme(const Histogramme<std::greater<Classe>> & h):Histogramme(h.getClasses().rbegin()->getBorneInf(),h.getClasses().begin()->getBorneSup(),h.getClasses().size()){
	
	ajouter(h.getEchantillon());

}

template <class T,class A>
const Echantillon &Histogramme<T,A>::getEchantillon() const {
	return echantillon;
}

template <class T,class A>
const std::set<Classe,T,A> &Histogramme<T,A>::getClasses() const {
	return classes;
}

template <class T,class A>
const std::multimap<Classe,Valeur> &Histogramme<T,A>::getValeurs() const{
	return valeurs;
}

template <class T,class A>
void Histogramme<T,A>::ajouter(const Echantillon & e){
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

template <class T,class A>
void Histogramme<T,A>::ajouter(const double & d){
	
	echantillon.ajouter(d);
	iterator it = classes.begin();
	while (it!=classes.end()) {
		if( d>=it->getBorneInf() && d<it->getBorneSup()){
			Classe c = *it;
			classes.erase(it);
			c.ajouter();
			classes.insert(c);
			//valeurs.insert(std::pair<Classe, Valeur>(Classe(c.getBorneInf(),c.getBorneSup(),c.getQuantite()),Valeur(d)));
		}
		++it;
	}
}

/*
bool operator< (const Classe & op1, const Classe & op2)
{
    return  op1.getBorneInf() < op2.getBorneInf();
}*/

#endif
