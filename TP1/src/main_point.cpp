#include <cstdlib>
#include <stdio.h>
#include "cartesien.hpp"
#include "polaire.hpp"
#include <vector>

int main() {
	puts("Execution de main_point...");

	std::vector<Point*> tab;
	printf("tab size = %d\n", (int)tab.size());
	Polaire p(12.0,24.0);
 	Cartesien c(13.0,25.0);
 	Point & p1 = p;
 	Point & p2 = c;

	std::vector<Point*>::iterator it;
	it = tab.begin();

	tab.push_back(&p);
	printf("tab size = %d\n", (int)tab.size());
	tab.push_back(&c);
	printf("tab size = %d\n", (int)tab.size());
	tab.push_back(&p1);
	printf("tab size = %d\n", (int)tab.size());
	tab.push_back(&p2);
	printf("tab size = %d\n", (int)tab.size());
 	
	return EXIT_SUCCESS;
}
