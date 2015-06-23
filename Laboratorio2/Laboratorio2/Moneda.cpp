/*
 * Moneda.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Moneda.h"

using namespace std;

Moneda::Moneda() {

	id=0;
	valor= rand()%(MAX_VALOR-MIN_VALOR)+MIN_VALOR;
	peso= rand()%(MAX_PESO-MIN_PESO)+MIN_PESO;
}

Moneda::~Moneda() {
	// TODO Auto-generated destructor stub
}

void Moneda::setId(int id){
	this->id=id;
}

ostream & operator<<(ostream& out, const Moneda& moneda){
	out<<"Id: "<<moneda.id<<" Peso: "<<moneda.peso<<" Valor: "<<moneda.valor<<endl;
	return out;
}
int Moneda::getPeso(){
	return peso;
}
int Moneda::getValor(){
	return valor;
}
int Moneda::getId(){
	return id;
}
