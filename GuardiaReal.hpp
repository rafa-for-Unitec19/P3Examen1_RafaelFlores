#ifndef GUARDIAREAL_H
#define GUARDIAREAL_H
#include <iostream>

using std::string;

class GuardiaReal{
	string nombre;
	int edad, tipo, ataque, defensa;
	GuardiaReal(string, int, int, int, int);
public:
	static const int CABALLERO = 1;
	static const int JINETE = 2;
	static const int ARQUERO = 3;
};
#endif
