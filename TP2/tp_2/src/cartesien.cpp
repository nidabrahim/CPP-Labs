#include "cartesien.hpp"
#include "polaire.hpp"
#include <math.h>
#include "nuage.hpp"
#include <iostream>
#define PI	3.14159265

Cartesien::Cartesien(const double  p_x, const double  p_y)
:x(p_x), y(p_y)
{
}

Cartesien::~Cartesien()
{
}

void Cartesien::afficher(std::stringstream & flux) const
{
	flux<<"(x="<<x<<";y="<<y<<")";
}

std::ostream & Cartesien::fillStream(std::ostream & out) const
{
	out<<"(x="<<x<<";y="<<y<<")";
	return out;
}

//angles in degrees, not in radians
void Cartesien::convertir(Polaire & p) const
{
	//puts("Cartesien::convertir(Polaire)");
	p.setDistance(sqrt(x*x+y*y));
	p.setAngle(acos(x/p.getDistance()) * 180 / PI);
}

void Cartesien::convertir(Cartesien & c) const
{
	//puts("Cartesien::convertir(Cartesien)");
	c.setX(x);
	c.setY(y);
}

Cartesien::Cartesien(const Polaire & p)
{
	x = p.getDistance() * cos(p.getAngle() * PI / 180);
	y = p.getDistance() * sin(p.getAngle() * PI / 180);
}


Cartesien barycentre(const Nuage & n) 
{
	std::stringstream out;
	double x=0,y=0,nb=(double)n.size();
	Cartesien current(0,0);
	for(Nuage::const_iterator it = n.begin(); it != n.end();++it)
	{
		(*it)->convertir(current);
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


Cartesien BarycentreCartesien::operator() (const Nuage & N)
{ 
	return barycentre(N);
}
