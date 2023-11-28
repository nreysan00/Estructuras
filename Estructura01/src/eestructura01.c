/*
 * eestructura01.c
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#include <string.h>
#include <stdio.h>
#include "estructura01.h"

void pedirPersona(persona *c) {
	puts("Introduce el nombre: ");
	fflush(stdout);
	//scanf("%s",c->nombre);
	fgets(c->nombre, NOMBREMAX, stdin);
	c->nombre[strlen(c->nombre)-1]='\0';

	puts("Introduce tus apellidos: ");
	fflush(stdout);
	//scanf("%s",c->apellido);
	fgets(c->apellido, APEMAX, stdin);
	c->nombre[strlen(c->apellido)-1]='\0';

	puts("Introduce la edad: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&c->edad);
}

void mostrarPersona(persona c) {
	printf("Nombre: %s\n",c.nombre);
	printf("Apellidos: %s\n",c.apellido);
	printf("Edad: %d",c.edad);
}
