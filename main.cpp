#include <iostream>
#include "Starks.hpp"
#include "Lannister.hpp"
#include "Targaryen.hpp"
#include "PequeniasFamiliasNobles.hpp"
#include "GuardiaReal.hpp"
#include "Dragones.hpp"

using namespace std;

Starks objStark;
Lannister objLan;
Targaryen objTar;

int menuE(){
	cout << "Elija la opcion que desee: "
	<< "\n\t1. Crear Familia"
	<< "\n\t2. Crear Soldado"
	<< "\n\t3. Listar Ejercito" << endl;
	int op; cin >> op;
	return op;
}

int menuF(){
	cout << "Elija la familia que desee: "
	<< "\n\t1. Starks"
	<< "\n\t2. Lannister"
	<< "\n\t3. Targaryen" << endl;
	int op; cin >> op;
	return op;
}

int menuG(){
	cout << "Elija la opcion que desee: "
	<< "\n\t1. Familias"
	<< "\n\t2. Simulacion"
	<< "\n\t3. Salir" << endl;
	int op; cin >> op;
	return op;
}

void AgregarStark(){
	cout << "Ingrese el nombre del jefe de la familia" << endl;
	string jf; getline(cin, jf);
	objStark.setJefeF(jf);
	cout << "Ingrese el animal emblema de la familia" << endl;
	string ae; getline(cin, ae);
	objStark.setAnimalE(ae);
	cout << "Ingrese el lema de la familia" << endl;
	string l; getline(cin, l);
	objStark.setLema(l);
	while(true){
		cout << "Ingrese la cantidad de lobos de la familia" << endl;
		int cl; cin >> cl;
		if (cl >= 0){
			objStark.setCantLobos(cl);
			break;
		}else{
			cout << "No puede meter lobos negativos!!!" << endl;
		}
	}
	while(true){
		cout << "Ingrese la cantidad de integrantes de la familia" << endl;
		int ci; cin >> ci;
		if (ci >= 0){
			objStark.setCantIntegrantes(ci);
			break;
		}else{
			cout << "No puede meter integrantes negativos!!!" << endl;
		}
	}
	cout << "Agregado con exito!!" << endl;
}


void AgregarLannister(){
	cout << "Ingrese el nombre del jefe de la familia" << endl;
	string jf; getline(cin, jf);
	objLan.setJefeF(jf);
	cout << "Ingrese el animal emblema de la familia" << endl;
	string ae; getline(cin, ae);
	objLan.setAnimalE(ae);
	cout << "Ingrese el lema de la familia" << endl;
	string l; getline(cin, l);
	objLan.setLema(l);
	cout << "Ingrese la Fuerza de MOntaña de la familia" << endl;
	string m; getline(cin, m);
	objLan.setFuerzaM(m);
	while(true){
		cout << "Ingrese la cantidad de dinero de la familia" << endl;
		int cl; cin >> cl;
		if (cl >= 0){
			objLan.setCantDinero(cl);
			break;
		}else{
			cout << "No puede meter lobos negativos!!!" << endl;
		}
	}
	while(true){
		cout << "Ingrese la cantidad de integrantes de la familia" << endl;
		int ci; cin >> ci;
		if (ci >= 0){
			objLan.setCantIntegrantes(ci);
			break;
		}else{
			cout << "No puede meter integrantes negativos!!!" << endl;
		}
	}
	cout << "Agregado con exito!!" << endl;
}

void AgregarTargaryen(){
	cout << "Ingrese el nombre de la reina de la familia" << endl;
	string jf; getline(cin, jf);
	objTar.setReina(jf);
	cout << "Ingrese el animal emblema de la familia" << endl;
	string ae; getline(cin, ae);
	objTar.setAnimalE(ae);
	cout << "Ingrese el lema de la familia" << endl;
	string l; getline(cin, l);
	objTar.setLema(l);
	while(true){
		cout << "Ingrese la cantidad de barcos de la familia" << endl;
		int cl; cin >> cl;
		if (cl >= 0){
			objLan.setCantDinero(cl);
			break;
		}else{
			cout << "No puede meter lobos negativos!!!" << endl;
		}
	}
	cout << "Agregado con exito!!" << endl;
}

void AgregarGuardia(){
	cout << "Ingrese el nombre del soldado en la Guardia" << endl;
	string n; getline(cin, n);
	int e;
	while(true){
		cout << "Ingrese la edad del soldado en la Guardia" << endl;
		cin >> e;
		if (e >= 0){
			break;
		}else{
			cout << "No puede edad negativa!!!" << endl;
		}
	}
	int d;
	while(true){
		cout << "Ingrese la defensa del soldado en la Guardia" << endl;
		cin >> d;
		if (d >= 0){
			break;
		}else{
			cout << "No puede defensa negativa!!!" << endl;
		}
	}
	int a;
	while(true){
		cout << "Ingrese el ataque del soldado en la Guardia" << endl;
		 cin >> a;
		if (a >= 0){
			break;
		}else{
			cout << "No puede meter ataque negativa!!!" << endl;
		}
	}
	int t; bool salida = true;
	while(salida){
		cout << "Ingrese el tipo del soldado en la Guardia"
		<< "\n\t1. Caballero"
		<< "\n\t2. Jinete"
		<< "\n\t3. Arquero"<< endl;
		cin >> t;
		switch(t){
			case 1:{
				GuardiaReal* pfn = new GuardiaReal(n, e, GuardiaReal::CABALLERO, a, d);
				objLan.setEjercito(*pfn);
				free(pfn);
				salida = false;
				break;}
			case 2:{
				GuardiaReal* pfn = new GuardiaReal(n, e, GuardiaReal::JINETE, a, d);
				objLan.setEjercito(*pfn);
				free(pfn);
				salida = false;
				break;}
			case 3:{
				GuardiaReal* pfn = new GuardiaReal(n, e, GuardiaReal::ARQUERO, a, d);
				objLan.setEjercito(*pfn);
				free(pfn);
				salida = false;
				break;}
			default:
				cout << "Tipo incorrecto" << endl;
		}
	}
	cout << "Agregado soldado con exito!!" << endl;
}


void AgregarPFN(){
	cout << "Ingrese el nombre del soldado en la PFN" << endl;
	string n; getline(cin, n);
	cout << "Ingrese el simbolo/escudo del soldado en la PFN" << endl;
	string s; getline(cin, s);
	cout << "Ingrese el lema del soldado en la PFN" << endl;
	string l; getline(cin, l);
	int d;
	while(true){
		cout << "Ingrese la defensa del soldado en la PFN" << endl;
		cin >> d;
		if (d >= 0){
			break;
		}else{
			cout << "No puede defensa negativa!!!" << endl;
		}
	}
	int a;
	while(true){
		cout << "Ingrese el ataque del soldado en la PFN" << endl;
		 cin >> a;
		if (a >= 0){
			break;
		}else{
			cout << "No puede meter ataque negativa!!!" << endl;
		}
	}
	PequeniasFamiliasNobles* pfn = new PequeniasFamiliasNobles(n, s, l, a, d);
	objStark.setEjercito(*pfn);
	free(pfn);
	cout << "Agregado soldado con exito!!" << endl;
}

void AgregarDragon(){
	cout << "Ingrese el nombre del Dragon" << endl;
	string n; getline(cin, n);
	cout << "Ingrese el color del Dragon" << endl;
	string c; getline(cin, c);
	cout << "Ingrese el tamanio del Dragon" << endl;
	string t; getline(cin, t);
	cout << "Ingrese la distancia de la llama" << endl;
	string dl; getline(cin, dl);
	int d;
	while(true){
		cout << "Ingrese la defensa del soldado en la PFN" << endl;
		cin >> d;
		if (d >= 0){
			break;
		}else{
			cout << "No puede defensa negativa!!!" << endl;
		}
	}
	int a;
	while(true){
		cout << "Ingrese el ataque del soldado en la PFN" << endl;
		 cin >> a;
		if (a >= 0){
			break;
		}else{
			cout << "No puede meter ataque negativa!!!" << endl;
		}
	}
	Dragones* pfn = new Dragones(n, c, t, dl, a, d);
	objTar.setEjercito(*pfn);
	free(pfn);
	cout << "Agregado soldado con exito!!" << endl;
}

void ListarStark(){
	for(int i = 0; i < objStark.getEjercito().size(); i++){
		objStark.getEjercito()[i].print();
	}
}


void ListarGuardia(){
	for(int i = 0; i < objLan.getEjercito().size(); i++){
		objLan.getEjercito()[i].print();
	}
}

void ListarDragon(){
	for(int i = 0; i < objTar.getEjercito().size(); i++){
		objTar.getEjercito()[i].print();
	}
}

void selectorF(int op){
	switch(menuF()){
		case 1:
			switch(op){
				case 1:
					if (objStark.getJefeF() == ""){
						cin.ignore();
						AgregarStark();
					}else{
						cout << "Ya hay una familia ingresada!!" << endl;
					}
					break;
				case 2:
					if (objStark.getEjercito().size() < 10){
						if (objStark.getJefeF() != "") {
							cin.ignore();
							AgregarPFN();
						}else{
							cout << "Todavia no existe una Familia" << endl;
						}
					}else{
						cout << "Ya tiene el maximo de soldados (10)" << endl;
					}
					break;
				case 3:
					if (objStark.getJefeF() != "") {
						ListarStark();
					}else{
						cout << "No tiene soldados para mostrar" << endl;
					}
					break;
			}
			break;
		case 2:
			switch(op){
				case 1:
					if (objLan.getJefeF() == ""){
						cin.ignore();
						AgregarLannister();
					}else{
						cout << "Ya hay una familia ingresada!!" << endl;
					}
					break;
				case 2:
					if (objLan.getEjercito().size() < 10){
						if (objLan.getJefeF() != "") {
							cin.ignore();
							AgregarGuardia();
						}else{
							cout << "Todavia no existe una Familia" << endl;
						}
					}else{
						cout << "Ya tiene el maximo de soldados (10)" << endl;
					}
					break;
				case 3:
					if (objLan.getJefeF() != "") {
						ListarGuardia();
					}else{
						cout << "No tiene soldados para mostrar" << endl;
					}
					break;
			}
			break;
		case 3:
			switch(op){
				case 1:
					if (objTar.getReina() == ""){
						cin.ignore();
						AgregarTargaryen();
					}else{
						cout << "Ya hay una familia ingresada!!" << endl;
					}
					break;
				case 2:
					if (objTar.getEjercito().size() < 10){
						if (objTar.getReina() != "") {
							cin.ignore();
							AgregarDragon();
						}else{
							cout << "Todavia no existe una Familia" << endl;
						}
					}else{
						cout << "Ya tiene el maximo de soldados (10)" << endl;
					}
					break;
				case 3:
					if (objTar.getReina() != "") {
						ListarDragon();
					}else{
						cout << "No tiene soldados para mostrar" << endl;
					}
					break;
			}
			break;
		default:
			cout << "La Opcion es incorrecta" << endl;
	}
}

void selectorE(){
	switch(menuE()){
		case 1:
			cout << "Agregar una familia" << endl;
			selectorF(1);
			break;
		case 2:
			cout << "Agregar Soldado" << endl;
			selectorF(2);
			break;
		case 3:
			cout << "Listar Ejercito" << endl;
			selectorF(3);
			break;
		default:
			cout << "La Opcion es incorrecta" << endl;
	}
}

int promedioD(Dragones d, bool op){
	switch (op)
	{
	case true:
		return d.ataque;
		break;
	case false:
		return d.defensa;
		break;
	}
}

int promedioPFN(PequeniasFamiliasNobles p, bool op){
	switch (op)
	{
	case true:
		return p.ataque;
		break;
	case false:
		return p.defensa;
		break;
	}
}

int promedioG(GuardiaReal g, bool op){
	switch (op)
	{
	case true:
		return g.ataque;
		break;
	case false:
		return g.defensa;
		break;
	}
}

float promDefensa(int op){
	int def = 0;
	switch (op)
	{
	case 1:
		for (size_t i = 0; i < objStark.getEjercito().size(); i++)
		{
			def += promedioPFN(objStark.getEjercito()[i], false);
		}
		return def /= objStark.getEjercito().size();
		break;
	default:
		break;
	}
}

void simulacion(){
	int first, second;
	while(true){
		first = menuF();
		if (first < 4 && first > 0){
			break;
		}else{
			cout << "No existe esa Familia!!" << endl;
		}
	}
	while(true){
		second = menuF();
		if ((second < 4 && second > 0) && second != first){
			break;
		}else{
			cout << "No existe esa Familia!! o ya se esta usando" << endl;
		}
	}
	bool winner = false, cambio = true;
	if(first == 1 && second == 2){

		while (!winner){
			if (cambio){
				
			}else{

			}
		}
	}
	
	
}

void selectorG(){
	bool salida = true;
	do{
		switch(menuG()){
			case 1:
				selectorE();
				break;
			case 2:
				//simulacion();
				break;
			case 3:
				salida = false;
				cout << "Nos vemos..." << endl;
				break;
			default:
				cout << "La Opcion es incorrecta" << endl;
		}
	}while(salida);
}

int main(){
	selectorG();
	return 0;
}
