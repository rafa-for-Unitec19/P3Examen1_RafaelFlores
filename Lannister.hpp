#ifndef Lannister_H
#define Lannister_H
#include <iostream>
#include <vector>
#include "GuardiaReal.hpp"

using std::string;
using std::vector;

class Lannister{
	string jefeFamilia, animalEmblema, lema, fuerzaMontania;  
	int cantIntegrantes, cantDinero;
	vector<GuardiaReal> ejercito;
public:
	Lannister(){};
	///Starks(string, string, string, int, int);
	~Lannister(){};
	void setJefeF(string j){this->jefeFamilia = j;};
	void setAnimalE(string a){this->animalEmblema = a;};
	void setLema(string l){this->lema = l;};
	void setCantDinero(int cl){this->cantDinero = cl;};
	void setCantIntegrantes(int ci){this->cantIntegrantes = ci;};
	void setEjercito(GuardiaReal e){this->ejercito.push_back(e);};
	void setFuerzaM(string m){this->fuerzaMontania = m;};
	string getJefeF() const {return this->jefeFamilia;};
	string getAnimalE() const {return this->animalEmblema;};
	string getLema() const {return this->lema;};
	int getCantDinero() const {return this->cantDinero;};
	int getCantIntegrantes() const {return this->cantIntegrantes;};
	string getFuerzaM() const {return this->fuerzaMontania;};
	vector<GuardiaReal> getEjercito() const {return ejercito;};
	void print();
};
#endif
