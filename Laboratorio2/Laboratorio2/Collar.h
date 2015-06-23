/*
 * Collar.h
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#pragma once

#include "stdafx.h"
using namespace std;

class Collar {
friend ostream& operator <<(ostream& out, const Collar& collar);
private:
	int id;
	int valor;
	int peso;
	int const MIN_CANT=2;
	int const MAX_CANT=5;
	int const MIN_VALOR=2000;
	int const MAX_VALOR=4000;
	int const MIN_PESO=500;
	int const MAX_PESO=1000;
public:
	Collar();
	virtual ~Collar();
	void setId(int);
	int getPeso();
	int getValor();
	int getId();
};
ostream& operator <<(ostream& out, const Collar& collar);

