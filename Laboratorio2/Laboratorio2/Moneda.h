/*
 * Moneda.h
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */

#pragma once
#include "stdafx.h"
using namespace std;

class Moneda {
friend ostream & operator<<(ostream& out, const Moneda& moneda);
private:
	int id;
	int valor;
	int peso;
	int const MIN_CANT=5;
	int const MAX_CANT=10;
	int const MIN_VALOR=1;
	int const MAX_VALOR=100;
	int const MIN_PESO=100;
	int const MAX_PESO=200;
public:
	Moneda();
	virtual ~Moneda();
	void setId(int);
	int getPeso();
	int getValor();
	int getId();

};

ostream & operator<<(ostream& out, const Moneda& moneda);

