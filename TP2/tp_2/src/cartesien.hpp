#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP
#include "point.hpp"
#include <sstream>

class Polaire;
template <class T> class Nuage;


/*Cartesien barycentre(const Nuage & N);*/

Cartesien barycentre_v1(const Nuage<Cartesien> & N);



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

template <typename V>
Cartesien barycentre_v2(const V & n){

	std::stringstream out;
	double x=0,y=0,nb=(double)n.size();
	Cartesien current(0,0);
	for(typename V::const_iterator it = n.begin(); it != n.end();++it)
	{
		(*it).convertir(current);
		x+=current.getX();
		y+=current.getY();
	}
	if(nb!=0)
	{
		current.setX(x/nb);
		current.setY(y/nb);
	}
	return current;
}

#endif //CARTESIEN_HPP
