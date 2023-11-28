/*
 ============================================================================
 Name        : Estructura04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "estructura04.h"
#include "listafechas.h"

int main(void) {
	fecha lista[MAXFECHA];
	fecha f;
	int i,num=0,mes;

	puts("Introduce los datos de los 8 pacientes");

	for(i=0; i<MAXFECHA; i++){
		pedirFecha(&f);
		puts("Añadido a la lista de fechas");
		num=insertarFechas(lista,num,f);
	}
	puts("Los datos son");
	mostrarFechas(lista, num);

	do{
		puts("Que mes quieres comprobar (1-12)(0 para salir): ");
		fflush(stdout);
		scanf("%d",&mes);
		mostrarCumpleaneros(lista,num,mes);
	}while(mes>0 && mes<=12);


	return EXIT_SUCCESS;
}
