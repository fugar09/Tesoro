/*
 * Pirata.cpp
 *
 *  Created on: Apr 17, 2015
 *      Author: b38603
 */
#include "stdafx.h"
#include "Pirata.h"
#include "Anillo.h"
#include "Collar.h"
#include "Corona.h"
#include "Moneda.h"
#include "Tesoro.h"



Pirata::Pirata(Tesoro tesoro) {
	cantAnillos= tesoro.getCantAnillos();
	cantCollares= tesoro.getCantCollares();
	cantCoronas= tesoro.getCantCoronas();
	cantMonedas= tesoro.getCantMonedas();

	anillos= new int[cantAnillos];
	collares= new int[cantCollares];
	coronas= new int[cantCoronas];
	monedas= new int[cantMonedas];

	anillosSolucion= new int[cantAnillos];
	collaresSolucion= new int[cantCollares];
	coronasSolucion= new int[cantCoronas];
	monedasSolucion= new int[cantMonedas];

	iteraciones=0;


	for(int i=0; i<cantAnillos;i++){
		anillos[i]=0;
	}
	for(int i=0; i<cantCollares;i++){
		collares[i]=0;
	}
	for(int i=0; i<cantCoronas;i++){
		coronas[i]=0;
	}
	for(int i=0; i<cantMonedas;i++){
		monedas[i]=0;
	}

	for(int i=0; i<cantAnillos;i++){
		anillosSolucion[i]=0;
	}
	for(int i=0; i<cantCollares;i++){
		collaresSolucion[i]=0;
	}
	for(int i=0; i<cantCoronas;i++){
		coronasSolucion[i]=0;
	}
	for(int i=0; i<cantMonedas;i++){
		monedasSolucion[i]=0;
	}

}

Pirata::~Pirata() {
	// TODO Auto-generated destructor stub
}
int Pirata::getPeso(Tesoro tesoro){

	int peso=0;
	for(int i=0;i<cantAnillos;i++){
		if(anillos[i]==1){
			peso+=tesoro.getAnillo(i).getPeso();
		}
	}
	for(int i=0;i<cantCollares;i++){
		if(collares[i]==1){
			peso+=tesoro.getCollar(i).getPeso();
		}
	}
	for(int i=0;i<cantCoronas;i++){
		if(coronas[i]==1){
			peso+=tesoro.getCorona(i).getPeso();
		}
	}
	for(int i=0;i<cantMonedas;i++){
		if(monedas[i]==1){
			peso+=tesoro.getMoneda(i).getPeso();
		}
	}
	return peso;
}
int Pirata::getValor(Tesoro tesoro){

	int valor=0;
	for(int i=0;i<cantAnillos;i++){
		if(anillos[i]){
			valor+=tesoro.getAnillo(i).getValor();
		}
	}
	for(int i=0;i<cantCollares;i++){
		if(collares[i]){
			valor+=tesoro.getCollar(i).getValor();
		}
	}
	for(int i=0;i<cantCoronas;i++){
		if(coronas[i]){
			valor+=tesoro.getCorona(i).getValor();
		}
	}
	for(int i=0;i<cantMonedas;i++){
		if(monedas[i]){
			valor+=tesoro.getMoneda(i).getValor();
		}
	}
	return valor;
}

void Pirata::bulto(int p1, int p2, int p3, int p4, Tesoro t){
	iteraciones++;
	
	if(p1==cantAnillos && p2==cantCollares && p3==cantCoronas && p4==cantMonedas){
		//Calcular el valor del bulto
		
		
		if(getValor(t)>gananciaMax){

			gananciaMax= getValor(t);
			pesoAlcanzado= getPeso(t);
			copiarVector(anillos,anillosSolucion,cantAnillos);
			copiarVector(collares,collaresSolucion,cantCollares);
			copiarVector(coronas,coronasSolucion,cantCoronas);
			copiarVector(monedas,monedasSolucion,cantMonedas);
			escribirSolucion(t);
		}

	}else{
		int peso = getPeso(t);
		if(peso<CAP_BULTO){
			if(p1<cantAnillos){
				for (int i = 0; i < 2; ++i){
					anillos[p1]=i;
						bulto(p1+1,p2,p3,p4,t);
				}
			}
			if(p2<cantCollares){
				for (int i = 0; i < 2; ++i){
					collares[p2]=i;
						bulto(p1,p2+1,p3,p4,t);
				}
			}
			if(p3<cantCoronas){
				for (int i = 0; i < 2; ++i){
					coronas[p3]=i;
						bulto(p1,p2,p3+1,p4,t);
				}
			}
			if(p4<cantMonedas){
				for (int i = 0; i < 2; ++i){
					monedas[p4]=i;
						bulto(p1,p2,p3,p4+1,t);
				}
			}

		}
	}

}


void Pirata::escribirSolucion(Tesoro t){
	pirataArchivo.open("solucion.txt");
	pirataArchivo<<"Capacidad del bulto: "<<CAP_BULTO<<" gramos"<<endl;
	pirataArchivo<<"Maxima Ganacia: "<<gananciaMax<<endl;
	pirataArchivo<<"Peso alcanzado "<<pesoAlcanzado<<endl;
	pirataArchivo<<"Numero de iteraciones: "<<iteraciones<<endl;

	pirataArchivo<<"****Anillos seleccionados****"<<endl;
	for(int i=0;i<cantAnillos;i++){
		if(anillosSolucion[i]){
			Anillo anilloTemp= t.getAnillo(i);
			pirataArchivo<< "Id: "<<anilloTemp.getId()<<" Peso: "<<anilloTemp.getPeso()<<" Valor: "<<anilloTemp.getValor()<<endl;
		}
	}
	pirataArchivo<<endl;
	pirataArchivo<<"****Collares seleccionados****"<<endl;
	for(int i=0;i<cantCollares;i++){
		if(collaresSolucion[i]){
			Collar collarTemp= t.getCollar(i);
			pirataArchivo<< "Id: "<<collarTemp.getId()<<" Peso: "<<collarTemp.getPeso()<<" Valor: "<<collarTemp.getValor()<<endl;
		}
	}
	pirataArchivo<<endl;
	pirataArchivo<<"****Coronas seleccionados****"<<endl;
	for(int i=0;i<cantCoronas;i++){
		if(coronasSolucion[i]){
			Corona coronaTemp=t.getCorona(i);
			pirataArchivo<< "Id: "<<coronaTemp.getId()<<" Peso: "<<coronaTemp.getPeso()<<" Valor: "<<coronaTemp.getValor()<<endl;
		}
	}
	pirataArchivo<<endl;
	pirataArchivo<<"****Monedas seleccionados****"<<endl;
	for(int i=0;i<cantMonedas;i++){
		if(monedasSolucion[i]){
			Moneda monedaTemp= t.getMoneda(i);
			pirataArchivo<< "Id: "<<monedaTemp.getId()<<" Peso: "<<monedaTemp.getPeso()<<" Valor: "<<monedaTemp.getValor()<<endl;
		}
	}

	pirataArchivo.close();
}

void Pirata::copiarVector(int*& vOriginal, int*& VCopiado, int tamano){
	for (int i=0;i<tamano;++i){
		VCopiado[i]= vOriginal[i];
	}
}

