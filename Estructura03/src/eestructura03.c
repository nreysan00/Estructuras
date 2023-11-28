/*
 * eestructura03.c
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>
#include "estructura03.h"

void pedirIMC(IMC *c) {
	puts("Introduce tu nombre: ");
	fflush(stdout);
	//scanf("%s",c->nombre);
	fgets(c->nombre, NOMBREMAX, stdin);
	c->nombre[strlen(c->nombre)-1]='\0';

	puts("Introduce tu peso: ");
	fflush(stdout);
	scanf("%f",&c->peso);

	puts("Introduce tu altura: ");
	fflush(stdout);
	scanf("%f",&c->altura);
}

void mostrarIMC(IMC c) {
	printf("Nombre: %s\n",c.nombre);
	printf("Peso: %f\n",c.peso);
	printf("Altura: %f\n",c.altura);
}

float calcIMC(IMC c) {
	return c.peso/(c.altura*c.altura);
}
