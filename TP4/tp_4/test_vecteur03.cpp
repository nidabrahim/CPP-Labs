// Entetes //---------------------------------------------------------------------------------------
#include <algorithm>
#include <deque>
#include "vecteur03.hpp"

// Fonction principale //---------------------------------------------------------------------------
int main(void) {
 Vecteur v1;
 Vecteur v2;

 complexe_t::stats();

 //for (unsigned i = 0; i<v1.getTaille(); ++i) v1[i]=complexe_t(10*i,i*i);
 //for (unsigned i = 0; i<v2.getTaille(); ++i) v2[i]=complexe_t(i,i+1);
 
 unsigned i=0;
 for (auto item : v1){
	v1[i]=complexe_t(10*i,i*i);
	++i;
 }
 i=0;
 for (auto item : v2){
	v2[i]=complexe_t(i,i+1);
	++i;
 }

 std::cout << std::endl << "v1 = " << v1 << std::endl;
 std::cout << "v2 = " << v2 << std::endl;
 complexe_t::stats();

 Vecteur v3 = v1;

 std::cout << std::endl << "v3 = " << v3 << std::endl;
 complexe_t::stats();

 Vecteur v4;

 v4=v1+v2;

 std::cout << std::endl << "v4 = " << v4 << std::endl;
 complexe_t::stats();

 Vecteur v5;

 v5=v1*v2;

 std::cout << std::endl << "v5 = " << v5 << std::endl;
 complexe_t::stats();

 std::deque<complexe_t> liste;

 //for (unsigned i = 0; i<v5.getTaille(); ++i) liste.push_back(v5[i]);
 
 i=0;
 for (auto item : v5){
	liste.push_back(v5[i]);
	++i;
 }

 std::cout << std::endl << "liste = v5" << std::endl;
 complexe_t::stats();

 std::sort(liste.begin(),liste.end(),ComparateurComplexe());

 std::cout << std::endl;
 //for (unsigned i = 0; i<liste.size(); ++i) std::cout << liste[i] << " ";
 i=0;
 for (auto item : liste){
	std::cout << liste[i] << " ";
	++i;
 }
 std::cout << std::endl;
 complexe_t::stats();
}

// Fin //-------------------------------------------------------------------------------------------
