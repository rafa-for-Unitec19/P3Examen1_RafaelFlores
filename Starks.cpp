#include "Starks.hpp"
#include <iostream>

using std::cout;
using std::endl;

void Starks::print(){
	cout << "Jefe de Familia: " << getJefeF() << "\n"
		<< "Animal Emblema" << getAnimalE() << "\n"
		<< "Lema" << getLema() << "\n"
		<< "Cantidad de Lobos" << getCantLobos() << "\n"
		<< "Cantidad de Integrantes" << getCantIntegrantes() << "\n\n";
}
