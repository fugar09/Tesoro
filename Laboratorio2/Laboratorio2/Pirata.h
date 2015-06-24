/*
 * Pirata.h
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */

#pragma once
#include "stdafx.h"
#include "Anillo.h"
#include "Collar.h"
#include "Corona.h"
#include "Moneda.h"
#include "Tesoro.h"

using namespace std;


class Pirata {


private:
	int* anillos;
	int* collares;
	int* coronas;
	int* monedas;

	int* anillosSolucion;
	int* collaresSolucion;
	int* coronasSolucion;
	int* monedasSolucion;

	int iteraciones=0;

	int cantAnillos;
	int cantCollares;
	int cantCoronas;
	int cantMonedas;
	int gananciaMax;
	int pesoAlcanzado;
	int const CAP_MAX= 2000;
	int const CAP_MIN= 1000;
	int const CAP_BULTO= rand()%(CAP_MAX-CAP_MIN)+CAP_MIN;
	

	ofstream pirataArchivo;

public:
	Pirata(Tesoro);
	virtual ~Pirata();
	int getValor(Tesoro);
	int getPeso(Tesoro);

	void bulto(int,int,int,int,Tesoro);
	void escribirSolucion(Tesoro);
	void copiarVector(int*&,int*&, int);
};

