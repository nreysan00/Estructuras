/*
 ============================================================================
 Name        : Estructura02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "estructura02.h"

int main(void) {
	frac c1,c2,c3;
	int num;

	puts("Introduce dos fracciones:");

	puts("Fracción 1");
	pedirFrac(&c1);

	puts("La primera fracción es: ");
	mostrarFrac(c1);

	puts("Fracción 2");
	pedirFrac(&c2);

	puts("La segunda fracción es: ");
	mostrarFrac(c2);

	do{
		puts("Multiplicar(1) o Dividir(2): ");
		fflush(stdout);
		scanf("%d",&num);
	}while(num<1 || num>2);

	if(num==1){
		multFrac(c1,c2,&c3);
	}else if(num==2){
		divFrac(c1,c2,&c3);
	}

	mostrarFrac(c3);

	return EXIT_SUCCESS;
}
