/*
 * main.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */



using namespace std;


int main(int argc, char **argv) {

	Tesoro t;
	ofstream tesoroArchivo;

	tesoroArchivo.open("tesoro.txt");
	tesoroArchivo<<t;
	tesoroArchivo.close();

	Pirata bolso(t);
	bolso.bulto(0,0,0,0,t);

	cout<<"El programa ha terminado"<<endl;

	return 0;
}




