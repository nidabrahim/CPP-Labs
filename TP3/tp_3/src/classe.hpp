#ifndef CLASSE_HPP
#define CLASSE_HPP

class Classe {
private:
	double borneInf;
	double borneSup;
	double quantite;
	
public:
	Classe(double bi=0, double bs=0, double q=0);
	double getBorneInf() const;
	double getBorneSup() const;
	double getQuantite() const;
	void setBorneInf(double bi);
	void setBorneSup(double bs);
	void setQuantite(double q);
	void ajouter();
	//bool operator<(const Classe& op);
	
};

#endif
