#ifndef _CROUPIERSIMPLE_HPP_
#define _CROUPIERSIMPLE_HPP_
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include "paquet.hpp"

class CroupierSimple : public Croupier{
	
	public:
		melanger(Paquet paquet){
			srand (time(NULL));
			int i = rand() % 75 + 1;
			int j = rand() % 75 + 1;
			paquet.permuter(i,j);
		}
};

#endif

