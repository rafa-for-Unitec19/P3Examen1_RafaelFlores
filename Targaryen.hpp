#ifndef TARGARYEN_H
#define TARGARYEN_H
#include <iostream>
#include <vector>
#include "Dragones.hpp"

using std::string;
using std::vector;

class Targaryen{
	string reina, animalEmblema, lema;  
	int cantBarcos;
	vector<Dragones> ejercito;
public:
	Targaryen(){};
	///Starks(string, string, string, int, int);
	~Targaryen(){};
	void setReina(string j){this->reina = j;};
	void setAnimalE(string a){this->animalEmblema = a;};
	void setLema(string l){this->lema = l;};
	void setCantBarcos(int cl){this->cantBarcos = cl;};
	void setEjercito(Dragones e){this->ejercito.push_back(e);};
	string getReina() const {return this->reina;};
	string getAnimalE() const {return this->animalEmblema;};
	string getLema() const {return this->lema;};
	int getCantBarcos() const {return this->cantBarcos;};
	vector<Dragones> getEjercito() const {return ejercito;};
	void print();
};
#endif
