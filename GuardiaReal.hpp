#ifndef GUARDIAREAL_H
#define GUARDIAREAL_H
#include <iostream>

using std::string;

class GuardiaReal{
	string nombre;
	int edad, tipo, ataque, defensa;
public:
	GuardiaReal(string n, int e, int t, int a, int d)
	:nombre(n), edad(e), tipo(t), ataque(a), defensa(d){};
	static const int CABALLERO = 1;
	static const int JINETE = 2;
	static const int ARQUERO = 3;
	void print();
	friend int promedioG(GuardiaReal, bool);
};
#endif
