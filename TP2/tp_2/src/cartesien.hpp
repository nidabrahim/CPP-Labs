#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP
#include "point.hpp"
#include <sstream>

class Polaire;
template <class T> class Nuage;


/*Cartesien barycentre(const Nuage & N);*/

class Cartesien : public Point {
private:
	double x,y;
protected:
public:
	Cartesien(const double  p_x = 0, const double  p_y = 0);
	~Cartesien();
	const double & getX() const{return x;};
	const double & getY() const{return y;};
	void afficher(std::stringstream & flux) const;
	void setX(const double & p_x){x = p_x;};
	void setY(const double & p_y){y = p_y;};
	std::ostream & fillStream(std::ostream & out) const;
	void convertir(Polaire & p) const;
	void convertir(Cartesien & c) const;
	Cartesien(const Polaire & p);
};
/*
class BarycentreCartesien {

	public:
   
	Cartesien operator() (const Nuage & N);
	
};*/

#endif //CARTESIEN_HPP
