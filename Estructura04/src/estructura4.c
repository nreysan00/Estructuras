/*
 * estructura4.c
 *
 *  Created on: 24 nov 2023
 *      Author: Usuario
 */

#include "estructura04.h"
#include <stdio.h>

void pedirFecha(fecha *f){
	puts("Introduce nombre:");
	fflush(stdout);
	scanf("%s",f->nombre);

	puts("Introduce dia de nacimiento:");
	fflush(stdout);
	scanf("%d",&f->dia);

	puts("Introduce mes de nacimiento: ");
	fflush(stdout);
	scanf("%d",&f->mes);

	puts("Introduce año de nacimiento: ");
	fflush(stdout);
	scanf("%d",&f->anio);
}
void mostrarFecha(fecha f){
	printf("Nombre: %s\n",f.nombre);
	printf("Dia: %d\n",f.dia);
	printf("Mes de nacimineto: %d\n",f.mes);
	printf("Año de nacimineto: %d\n",f.anio);
}

