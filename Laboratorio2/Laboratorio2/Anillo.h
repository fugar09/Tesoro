/*
 * Anillo.h
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */

#pragma once
#include "stdafx.h"

using namespace std;


class Anillo {
friend ostream& operator<<(ostream& out, const Anillo& anillo);
private:
	int id;
	int valor;
	int peso;
	int const MIN_CANT=5;
	int const MAX_CANT=7;
	int const MIN_VALOR=100;
	int const MAX_VALOR=200;
	int const MIN_PESO=200;
	int const MAX_PESO=300;
public:
	Anillo();
	virtual ~Anillo();
	void setId(int);
	int getPeso();
	int getValor();
	int getId();
};
ostream& operator<<(ostream& out, const Anillo& anillo);
