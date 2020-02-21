#include "Lannister.hpp"
#include <iostream>

using std::cout;
using std::endl;

void Lannister::print(){
	cout << "Jefe de Familia: " << getJefeF() << "\n"
		<< "Animal Emblema" << getAnimalE() << "\n"
		<< "Lema" << getLema() << "\n"
		<< "Fuerza Montaña" << getFuerzaM() << "\n"
		<< "Cantidad de Dinero" << getCantDinero() << "\n"
		<< "Cantidad de Integrantes" << getCantIntegrantes() << "\n\n";
}
