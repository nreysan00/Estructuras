/*
 * listapacientes.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#include "listapacientes.h"

void insertarPaciente(IMC lista[MAXPACIENTES], int *tam, IMC p) {
	if(*tam >=MAXPACIENTES){
		return;
	}

	lista[*tam]=p;
	(*tam)++;
}

int buscarBaciente(IMC lista[MAXPACIENTES], int tam, char nombre[NOMBREMAX], IMC * p) {
	int i;
	for(i=0; i<tam ; i++) {
		if(strcmp(nombre, lista[i].nombre)==0){
//			strcpy(p->nombre, lista[i].nombre);
//			p->peso=lista[i].peso;
//			p->altura=lista[i].altura;
			*p=lista[i];
			return 1;
		}
	}
	return 0;
}

void mostrarLista(IMC lista[MAXPACIENTES], int tam) {
	int i;
	for(i=0; i<tam ; i++){
		mostrarPaciente(lista[i]);
	}
}

int borrarPaciente(IMC lista[MAXPACIENTES], int tam, char nombre[NOMBREMAX]) {
	int i;
	int posEncontrado=MAXPACIENTES;
	for(i=0; i<tam ; i++){
		if(strcmp(nombre, lista[i],nombre)==0){
			posEncontrado=i;
		}
	}
	if(posEncontrado!=MAXPACIENTES){
	for(i=posEncontrado; i<tam-1; i++){
		lista[i]=lista[i+1];
	}
	tam--;
	}
}
