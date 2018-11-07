#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <string>


using namespace std;

class Valeur {
private:
	double nombre;
	string etudiant;
	
public:
	Valeur(double v = 0);
	Valeur(const double v, const char * n);
	double getNombre() const;
	double getNote() const;
	string getEtudiant() const;
	void setNombre(double);
	void setNote(double);
	void setEtudiant(const char *);
	
};

#endif
