#ifndef VALEUR_HPP
#define VALEUR_HPP

class Valeur {
private:
	double nombre;
	
	
public:
	Valeur(double v = 0);
	double getNombre() const;
	void setNombre(double);
	
};

#endif
