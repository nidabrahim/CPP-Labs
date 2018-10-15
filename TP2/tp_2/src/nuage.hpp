#ifndef NUAGE_HPP
#define NUAGE_HPP
#include "point.hpp"
#include "polaire.hpp"
#include "cartesien.hpp"
#include <vector>
#include <iostream>


template <class T>
class Nuage {
	private:
	std::vector<T*> points;
	
	public:
	typedef typename std::vector<T*>::const_iterator const_iterator;
	typedef typename std::vector<T*>::iterator iterator;
	
	const_iterator begin() const;
	iterator begin();
 	const_iterator end() const;
 	iterator end();
 	
 	void ajouter(T p);
 	
	// void ajouter(Cartesien & p);
	// void ajouter(Polaire & p);
	
	size_t size() const; 
};

template <class T>
typename Nuage<T>::const_iterator Nuage<T>::begin()const{

	return points.cbegin();
}

template <class T>
typename Nuage<T>::iterator Nuage<T>::begin(){
	
	return points.begin();
}

template <class T>
typename Nuage<T>::const_iterator Nuage<T>::end()const{
	 
	 return points.cend();
}

template <class T>
typename Nuage<T>::iterator Nuage<T>::end(){
	
	return points.end();
}

template <class T>
void Nuage<T>::ajouter(T p){
	
	points.push_back(&p);
}

template <class T>
size_t Nuage<T>::size()const{
	
	return points.size();
}

#endif
