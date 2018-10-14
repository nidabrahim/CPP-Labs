#ifndef POLAIRE_HPP
#define POLAIRE_HPP
#include "point.hpp"
#include <sstream>

class Cartesien;
class Nuage;

class Polaire : public Point {
private:
	double  distance, angle;
public:
	Polaire(const double  p_angle = 0, const double  p_distance = 0);
	~Polaire();
	const double & getAngle() const{return angle;};
	const double & getDistance() const{return distance;};
	void afficher(std::stringstream & flux) const;
	void setAngle(const double & p_angle){angle = p_angle;};
	void setDistance(const double & p_distance){distance = p_distance;};
	std::ostream & fillStream(std::ostream & out) const;
	void convertir(Cartesien & c) const;
	void convertir(Polaire & p) const;
	Polaire(const Cartesien & c);
};


class BarycentrePolaire {

	public:
   
	Polaire operator() (const Nuage & N);
	
};

#endif //POLAIRE_HPP
