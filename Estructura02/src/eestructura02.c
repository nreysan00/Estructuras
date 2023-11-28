/*
 * eestructura02.c
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#include <stdio.h>
#include "estructura02.h"

void pedirFrac(frac *c) {
	puts("Introduce el numerador:");
	fflush(stdout);
	scanf("%d",&c->numerador);

	puts("Introduce el denominador: ");
	fflush(stdout);
	scanf("%d",&c->denominador);
}

void mostrarFrac(frac c) {
	printf("Numerador: %d\n",c.numerador);
	printf("Denominador: %d\n",c.denominador);
}

void divFrac(frac c, frac c2, frac *c3) {
	c3->numerador=c.numerador*c2.denominador;
	c3->denominador=c.denominador*c2.numerador;
}

void multFrac(frac c, frac c2, frac *c3) {
	c3->numerador=c.numerador*c2.numerador;
	c3->denominador=c.denominador*c2.denominador;
}

void sumaFrac(frac c, frac c2, frac *c3) {

}

void resFrac(frac c, frac c2, frac *c3) {

}
