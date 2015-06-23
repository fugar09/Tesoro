/*
 * Tesoro.h
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
using namespace std;


class Tesoro {
friend ostream& operator<<(ostream& out, const Tesoro& tesoro);
private:
	int contador;
	Moneda* monedas;
	Collar* collares;
	Corona* coronas;
	Anillo* anillos;
	int cantMonedas;
	int cantCollares;
	int cantCorona;
	int cantAnillos;
	int const CANT_MAX_ANILLOS=7;
	int const CANT_MIN_ANILLOS=5;
	int const CANT_MAX_COLLARES=5;
	int const CANT_MIN_COLLARES=2;
	int const CANT_MAX_CORONAS=1;
	int const CANT_MIN_CORONAS=5;
	int const CANT_MAX_MONEDAS=10;
	int const CANT_MIN_MONEDAS=5;

public:
	Tesoro();
	virtual ~Tesoro();
	int getCantAnillos();
	int getCantCoronas();
	int getCantCollares();
	int getCantMonedas();
	Moneda getMoneda(int);
	Collar getCollar(int);
	Corona getCorona(int);
	Anillo getAnillo(int);
};
ostream& operator<<(ostream& out, const Tesoro& tesoro);

