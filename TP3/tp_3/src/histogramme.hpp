#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include "classe.hpp"
#include "echantillon.hpp"
#include <set>

template <class T = std::less<Classe>,class A = std::allocator<Classe>>
class Histogramme {
private:
	std::set<Classe,T,A> classes;
	Echantillon echantillon;
	
public:
	typedef typename std::set<Classe,T,A> classes_t;
	typedef typename classes_t::const_iterator iterator;
	Histogramme(double bi, double bs, int n);
	const std::set<Classe,T,A> &getClasses() const;
	void ajouter(const Echantillon & e);
};


 bool operator< (const Classe & op1, const Classe & op2);
 
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
const std::set<Classe,T,A> &Histogramme<T,A>::getClasses() const {
	return classes;
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

/*
bool operator< (const Classe & op1, const Classe & op2)
{
    return  op1.getBorneInf() < op2.getBorneInf();
}*/

#endif
