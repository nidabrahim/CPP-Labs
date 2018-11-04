#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include "classe.hpp"
#include "echantillon.hpp"
#include <set>

//template <class T>
class Histogramme {
private:
	std::set<Classe/*,T*/> classes;
	Echantillon echantillon;
	
public:
	typedef std::set<Classe> classes_t;
	typedef classes_t::const_iterator iterator;
	Histogramme(double bi, double bs, int n);
	std::set<Classe> getClasses();
	void ajouter(const Echantillon & e);
};


 bool operator< (const Classe & op1, const Classe & op2);
 
 

#endif
