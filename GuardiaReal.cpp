#include "GuardiaReal.hpp"
#include <iostream>

using namespace std;

void GuardiaReal::print(){
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	switch(tipo){
		case 1: 
		cout << "Tipo: Caballero" << endl;
		break;
		case 2: 
		cout << "Tipo: Jinete" << endl;
		break;
		case 3: 
		cout << "Tipo: Arquero" << endl;
	}	
	cout << "Ataque: " << ataque << endl;
	cout << "Defensa: " << defensa << "\n\n";
}
