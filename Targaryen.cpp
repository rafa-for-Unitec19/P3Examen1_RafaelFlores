#include "Targaryen.hpp"
#include <iostream>

using std::cout;
using std::endl;

void Targaryen::print(){
	cout << "Reina: " << getReina() << "\n"
		<< "Animal Emblema" << getAnimalE() << "\n"
		<< "Lema" << getLema() << "\n"
		<< "Cantidad de Barcos" << getCantBarcos() << "\n\n";
}
