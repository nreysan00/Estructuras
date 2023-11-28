/*
 ============================================================================
 Name        : Estructura01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "estructura01.h"

int main(void) {
	persona c1;

	puts("Introduce tus datos");
	pedirPersona(&c1);

	puts("Tus datos son: ");
	mostrarPersona(c1);
	return EXIT_SUCCESS;
}
