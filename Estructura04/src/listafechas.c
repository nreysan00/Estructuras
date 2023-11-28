/*
 * listafechas.c
 *
 *  Created on: 27 nov 2023
 *      Author: Usuario
 */
#include "estructura04.h"

int insertarFechas(fecha lista[MAXFECHA], int tam, fecha f){
	if(tam>=MAXFECHA){
		return tam;
	}
	lista[tam]=f;
	tam++;
	return tam;
}

void mostrarCumpleaneros(fecha lista[MAXFECHA], int tam, int mes){
	int i;
	for(i=0; i<tam; i++){
		if(lista[i].mes==mes){
			mostrarFecha(lista[i]);
		}
	}
}


void mostrarFechas(fecha lista[MAXFECHA], int tam){
	int i;
	for(i=0; i<tam; i++){
			mostrarFecha(lista[i]);
	}
}
