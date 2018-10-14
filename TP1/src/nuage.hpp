#ifndef NUAGE_HPP
#define NUAGE_HPP
#include "point.hpp"
#include "polaire.hpp"
#include "cartesien.hpp"
#include <vector>
#include <iostream>


class Nuage {
	private:
	std::vector<Point*> points;
	
	public:
	typedef std::vector<Point*>::const_iterator const_iterator;
	typedef std::vector<Point*>::iterator iterator;
	
	const_iterator begin() const;
	iterator begin();
 	const_iterator end() const;
 	iterator end();
 	
	void ajouter(Cartesien & p);
	void ajouter(Polaire & p);
	
	size_t size() const; 
};

#endif
