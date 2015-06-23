/*
 * Anillo.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Anillo.h"


using namespace std;

Anillo::Anillo() {
	id=0;
	valor= rand()%(MAX_VALOR-MIN_VALOR)+MIN_VALOR;
	peso= rand()%(MAX_PESO-MIN_PESO)+MIN_PESO;

}

Anillo::~Anillo() {
	// TODO Auto-generated destructor stub
	//cout<<"Llamado al destructor"<<endl;
}

void Anillo::setId(int id){
	this->id= id;
}

ostream& operator<<(ostream& out, const Anillo& anillo){
	out <<"Id: "<<anillo.id<<" Peso "<<anillo.peso<<" Valor: "<<anillo.valor<<endl;
	return out;

}
int Anillo::getPeso(){
	return peso;
}
int Anillo::getValor(){
	return valor;
}
int Anillo::getId(){
	return id;
}
