/*
 * Corona.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Corona.h"


using namespace std;


Corona::Corona() {

	id=0;
	valor= rand()%(MAX_VALOR-MIN_VALOR)+MIN_VALOR;
	peso= rand()%(MAX_PESO-MIN_PESO)+MIN_PESO;
}

Corona::~Corona() {
	// TODO Auto-generated destructor stub
}

void Corona::setId(int id){
	this->id= id;
}

ostream & operator <<(ostream& out, const Corona& corona){
	out<<"Id: "<<corona.id<<" Peso: "<<corona.peso<<" Valor: "<<corona.valor<<endl;
	return out;
}
int Corona::getPeso(){
	return peso;
}
int Corona::getValor(){
	return valor;
}
int Corona::getId(){
	return id;
}
