/*
 * eestructura05.c
 *
 *  Created on: 27 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#include "Estrucutra05.h"

void pedirPersona(persona *p){
	puts("Introduce nombre: ");
	fflush(stdin);
	fflush(stdout);
	fgets(p->nombre,MAXNOMBRE, stdin);
	p->nombre[strlen(p->nombre)-1]='\0';

	puts("Introduce dirección: ");
	fflush(stdin);
	fflush(stdout);
	fgets(p->direc,MAXDIREC, stdin);
	p->direc[strlen(p->direc)-1]='\0';

	puts("Introduce número de telefono: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p->numtel);

	puts("Introduce edad: ");
	fflush(stdout);
	scanf("%d",&p->edad);
}

void mostrarPersona(persona p){
	printf("Nombre: %s\n",p.nombre);
	printf("Direccion: %s\n",p.direc);
	printf("Número de telefono: %d\n",p.numtel);
	printf("Edad: %d\n",p.edad);
}

int insertarPersona(persona lista[MAX], int tam, persona p){
	if(tam>=MAX){
		return tam;
	}
	lista[tam]=p;
	tam++;
	return tam;
}

void mostrarPersonas(persona lista[MAX], int tam, persona p) {
	int i;
	for(i=0; i<tam ; i++){
		printf("%s\n",lista[i].nombre);
	}
}

void mostrarEdad(persona lista[MAX], int tam, persona p, int n1, int n2){
	int i;
	for(i=0; i<tam ; i++){
		if(lista[i].edad>=n1 && lista[i].edad<=n2 ){
			mostrarPersona(lista[i]);
		}

	}
}

void mismaIni(persona lista[MAX], int tam, persona p, char letra){
	int i;
	for(i=0; i<tam ; i++){
		if(lista[i].nombre[0]==letra){
			mostrarPersona(lista[i]);
		}
	}
}
