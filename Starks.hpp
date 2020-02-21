#ifndef STARKS_H
#define STARKS_H
#include <iostream>
#include <vector>
#include "PequeniasFamiliasNobles.hpp"

using std::string;
using std::vector;

class Starks{
	string jefeFamilia, animalEmblema, lema;  
	int cantLobos, cantIntegrantes;
	vector<PequeniasFamiliasNobles> ejercito;
public:
	Starks(){};
	///Starks(string, string, string, int, int);
	~Starks(){};
	void setJefeF(string j){this->jefeFamilia = j;};
	void setAnimalE(string a){this->animalEmblema = a;};
	void setLema(string l){this->lema = l;};
	void setCantLobos(int cl){this->cantLobos = cl;};
	void setCantIntegrantes(int ci){this->jefeFamilia = ci;};
	void setEjercito(PequeniasFamiliasNobles e){this->ejercito.push_back(e);};
	string getJefeF() const {return this->jefeFamilia;};
	string getAnimalE() const {return this->animalEmblema;};
	string getLema() const {return this->lema;};
	int getCantLobos() const {return this->cantLobos;};
	int getCantIntegrantes() const {return this->cantIntegrantes;};
	vector<PequeniasFamiliasNobles> getEjercito() const {return ejercito;};
	void print();
};
#endif
