#include "nuage.hpp"

Nuage::const_iterator Nuage::begin()const{

	return points.cbegin();
}

Nuage::iterator Nuage::begin(){
	
	return points.begin();
}
	
Nuage::const_iterator Nuage::end()const{
	 
	 return points.cend();
}

Nuage::iterator Nuage::end(){
	
	return points.end();
}
 	
void Nuage::ajouter(Cartesien & p){
	
	points.push_back(&p);
}

void Nuage::ajouter(Polaire & p){
	
	points.push_back(&p);
}

size_t Nuage::size()const{
	
	return points.size();
}
