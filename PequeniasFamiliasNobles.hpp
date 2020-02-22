#ifndef PEQUENIASFAMILIASNOBLES_H
#define PEQUENIASFAMILIASNOBLES_H
#include <iostream>

using std::string;

class PequeniasFamiliasNobles{
	string nombre, simboloEscudo, lema;
	int ataque, defensa;
public:
	PequeniasFamiliasNobles(string n, string s, string l, int a, int d)
	: nombre(n), simboloEscudo(s), lema(l), ataque(a), defensa(d){};
	void print();
	friend int promedioPFN(PequeniasFamiliasNobles, bool);
};
#endif
