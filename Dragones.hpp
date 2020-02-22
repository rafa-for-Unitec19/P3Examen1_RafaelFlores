#ifndef DRAGONES_H
#define DRAGONES_H
#include <iostream>

using std::string;

class Dragones{
	string nombre, color, tamanio, distanciaLlama;
	int ataque, defensa;
public:
	Dragones(string n, string c, string t, string dl, int a, int d)
	:nombre(n), color(c), tamanio(t), distanciaLlama(dl), ataque(a), defensa(d){};
	void print();
	friend int promedioD(Dragones, bool);
};
#endif
