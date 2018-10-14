#ifndef POINT_HPP
#define POINT_HPP
#include <sstream>

class Polaire;
class Cartesien;

class Point {
	public:
	virtual void afficher(std::stringstream & flux) const = 0 ; 
	virtual std::ostream & fillStream(std::ostream & out) const = 0;
	friend std::ostream & operator<<(std::ostream & out, const Point & p);
	virtual void convertir(Polaire & p) const = 0;
	virtual void convertir(Cartesien & c) const = 0;
};




	
	
#endif //POINT_HPP
