/*
 * coches.c
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#include "coches.h"
#include <stdio.h>

void pedirCoche(coche *c) {
	puts("Introduce Matrícula: ");
	fflush(stdout);
	scanf("%s", c->matricula);

	puts("Introduce Potencia: ");
	fflush(stdout);
	scanf("%d", &c->potencia);

	puts("Bastidor: ");
	//borra el buffer
	fflush(stdin);
	fflush(stdout);
	scanf("%s", c->bastidor);

	puts("Introduce Modelo: ");
	fflush(stdout);
	scanf("%s", c->modelo);

	puts("Introduce Kilómetros: ");
	fflush(stdout);
	scanf("%d", &c->kms);

	puts("Tu coche es:");
	printf("Matrícula: %s\n",c->matricula);
	printf("Matrícula: %d\n",c->potencia);
	printf("Matrícula: %s\n",c->bastidor);
	printf("Matrícula: %s\n",c->marca);
	printf("Matrícula: %s\n",c->modelo);
	printf("Matrícula: %d\n",c->kms);
}

void mostrarCoche(coche c) {
	printf("Matrícula: %s\n",c.matricula);
	printf("Potencia: %d\n",c.potencia);
	printf("Bastidor: %s\n",c.bastidor);
	printf("Marca: %s\n",c.marca);
	printf("Modelo: %s\n",c.modelo);
	printf("Kilómetros: %d\n",c.kms);
}

