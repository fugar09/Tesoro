/*
 * Corona.h
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */

#pragma once
#include "stdafx.h"
using namespace std;

class Corona {
friend ostream & operator<<(ostream& out, const Corona& corona);
private:
	int id;
	int valor;
	int peso;
	int const MIN_CANT=1;
	int const MAX_CANT=5;
	int const MIN_VALOR=1000;
	int const MAX_VALOR=10000;
	int const MIN_PESO=500;
	int const MAX_PESO=2000;
public:
	Corona();
	virtual ~Corona();
	void setId(int);
	int getPeso();
	int getValor();
	int getId();
};
ostream & operator <<(ostream& out, const Corona& corona);

