#include <iostream>
using namespace std;

#include "Onic.h"
#include "evos.h"

int main() { // agregasi
	class player;
	evos* varEvos = new evos("Karjo");
	evos* varevos2 = new evos("Budi");
	onic* varonic1 = new onic("kirun");
	onic*= varonic2 = new onic("cuplis");
	onic* varonic3 = new onic("Sule");

	class team;
	varEvos->tambahOnic(varOnic1);
	varEvos->tambahOnic(varEvos2);
	varevos2->tambahOnic(varOnic3);
	varevos2->tambahOnic(varOnic1);

	varEvos->cetakOnic();
	varevos2->cetakOnic();

	delete varEvos;
	delete varevos2;
	delete varOnic1;
	delete varOnic2;
	delete carOnic3;

	system("pause");

	return 0;
}