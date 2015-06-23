// Laboratorio2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Tesoro.h"
#include "Pirata.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Tesoro t;
	ofstream tesoroArchivo;

	tesoroArchivo.open("tesoro.txt");
	tesoroArchivo << t;
	tesoroArchivo.close();

	Pirata bolso(t);
	bolso.bulto(0, 0, 0, 0, t);

	cout << "El programa ha terminado" << endl;

	system("pause");
	return 0;
}

