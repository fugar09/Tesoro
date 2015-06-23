/*
 * Tesoro.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Tesoro.h"

using namespace std;


Tesoro::Tesoro() {
	srand(time(0));
	cantAnillos= rand()%(CANT_MAX_ANILLOS-CANT_MIN_ANILLOS)+CANT_MIN_ANILLOS;
	cantCollares=rand()%(CANT_MAX_COLLARES-CANT_MIN_COLLARES)+CANT_MIN_COLLARES;
	cantCorona=rand()%(CANT_MAX_CORONAS-CANT_MIN_CORONAS)+CANT_MIN_CORONAS;
	cantMonedas=rand()%(CANT_MAX_MONEDAS-CANT_MIN_MONEDAS)+CANT_MIN_MONEDAS;

	contador=0;
	anillos= new Anillo[cantAnillos];
	for(int i=0;i<cantAnillos;i++){
		anillos[i].setId(contador);
		contador++;
	}
	collares= new Collar[cantCollares];
	for(int i=0;i<cantCollares;i++){
		collares[i].setId(contador);
		contador++;
	}
	coronas= new Corona[cantCorona];
	for(int i=0;i<cantCorona;i++){
		coronas[i].setId(contador);
		contador++;
	}
	monedas= new Moneda[cantMonedas];
	for(int i=0;i<cantMonedas;i++){
		monedas[i].setId(contador);
		contador++;
	}
	cout<<"Cantidad de articulos del tesoro: "<<contador<<endl;

}

Tesoro::~Tesoro() {
	// TODO Auto-generated destructor stub
}

ostream& operator<<(ostream& out, const Tesoro& tesoro){
	out<<"****Lista de Anillos****"<<endl;
	for (int i=0; i<tesoro.cantAnillos; i++){
		out<<tesoro.anillos[i];
	}
	out<<endl;
	out<<"****Lista de Collares***"<<endl;
	for (int i=0; i<tesoro.cantCollares; i++){
		out<<tesoro.collares[i];
	}
	out<<endl;
	out<<"****Lista de Coronas***"<<endl;
	for (int i=0; i<tesoro.cantCorona; i++){
		out<<tesoro.coronas[i];
	}
	out<<endl;
	out<<"****Lista de Monedas***"<<endl;
	for (int i=0; i<tesoro.cantMonedas; i++){
		out<<tesoro.monedas[i];
	}
	return out;
}
int Tesoro::getCantAnillos(){
	return cantAnillos;
}
int Tesoro::getCantCollares(){
	return cantCollares;
}
int Tesoro::getCantCoronas(){
	return cantCorona;
}
int Tesoro::getCantMonedas(){
	return cantMonedas;
}

Moneda Tesoro::getMoneda(int i){
	return monedas[i];
}
Collar Tesoro::getCollar(int i){
	return collares[i];
}
Anillo Tesoro::getAnillo(int i){
	return anillos[i];
}
Corona Tesoro::getCorona(int i){
	return coronas[i];
}
