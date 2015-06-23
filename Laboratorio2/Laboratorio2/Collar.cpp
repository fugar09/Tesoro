/*
 * Collar.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Collar.h"


Collar::Collar() {

	id=0;
	valor= rand()%(MAX_VALOR-MIN_VALOR)+MIN_VALOR;
	peso= rand()%(MAX_PESO-MIN_PESO)+MIN_PESO;

}

Collar::~Collar() {
	// TODO Auto-generated destructor stub
}
void Collar::setId(int id){
	this->id=id;
}
ostream& operator <<(ostream& out, const Collar& collar){
	out<<"Id: "<<collar.id<<" Peso: "<<collar.peso<<" Valor: "<<collar.valor<<endl;
	return out;
}
int Collar::getPeso(){
	return peso;
}
int Collar::getValor(){
	return valor;
}
int Collar::getId(){
	return id;
}
