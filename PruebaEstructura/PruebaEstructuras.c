/*
 * PruebaEstructuras.c
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include "coches.h"

int main(void) {

	coche c1;
	coche c2 = {"22222RRR",250,"FADSFFASV43","Mercedes","SLK 320",135789};
	coche c3;

	puts("Introduce el coche: ");
	pedirCoche(&c1);

	puts("Tu coche es ");
	mostrarCoche(c1);

	puts("El coche es: ");
	mostrarCoche(c2);
	c3=c2; //hacr una copia de los datos

	return EXIT_SUCCESS;
}
