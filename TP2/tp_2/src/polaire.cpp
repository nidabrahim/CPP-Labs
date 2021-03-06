#include "polaire.hpp"
#include "cartesien.hpp"
#include "nuage.hpp"
#include <math.h>

#define PI	3.14159265

Polaire::Polaire(const double  p_angle, const double  p_distance)
:distance(p_distance), angle(p_angle)
{
}

Polaire::~Polaire()
{
}

void Polaire::afficher(std::stringstream & flux) const
{
	flux<<"(a="<<angle<<";d="<<distance<<")";
}

std::ostream & Polaire::fillStream(std::ostream & out) const
{
	out<<"(a="<<angle<<";d="<<distance<<")";
	return out;
}

void Polaire::convertir(Cartesien & c) const
{
	//puts("Polaire::convertir(Cartesien)");
	c.setX(distance * cos(angle * PI / 180));
	c.setY(distance * sin(angle * PI / 180));
}

void Polaire::convertir(Polaire & p) const
{
	//puts("Polaire::convertir(Polaire)");
	p.setAngle(angle);
	p.setDistance(distance);
}

Polaire::Polaire(const Cartesien & c )
:distance(sqrt(pow(c.getX(),2)+pow(c.getY(),2))), 
angle((distance!=0)?(acos(c.getX()/distance) * 180 / PI):0)
{
}

Polaire barycentre_v1(const Nuage<Polaire> & n) 
{
	std::stringstream out;
	double x=0,y=0,nb=(double)n.size();
	Cartesien current(0,0);
	for(Nuage<Polaire>::const_iterator it = n.begin(); it != n.end();++it)
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
	Polaire P(current);
	return P;
	
}

/*
Polaire BarycentrePolaire::operator() (const Nuage & N) 
{ 
	Cartesien C = barycentre(N);
	Polaire P(C);
	
	return P; 
}*/
