/*
 ============================================================================
 Name        : Estructura05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "Estrucutra05.h"

int main(void) {
	persona lista[MAX];
	persona p;
	char letra;
	int i,n1,n2,num=0,opcion;

	puts("Administrador de datos de personas");

	for(i=0; i<MAX; i++){
		pedirPersona(&p);
		puts("¡Persona añadida a la base de datos!");
		num=insertarPersona(lista,num,p);
		if (strlen(p.nombre)==0) {
			num--;
			break;
		}
	}

	do{

	puts("1.Mostrar lista de todos los nombres");
	puts("2.Mostrar las personas de una cierta edad");
	puts("3.Mostrar las personas con la misma inicial");
	puts("4.Salir");
	puts("Introduzca un número para seleccionar la opción deseada (1-4)");
	fflush(stdout);
	scanf("%d",&opcion);

	switch(opcion){
	case 1:
		puts("Muestra la lista de todos los nombres");
		mostrarPersonas(lista,num,p);
		break;
	case 2:
		puts("Muestra las personas de una cierta edad");
		puts("Introduce el rango de edad deseado: ");
		fflush(stdout);
		scanf("%d %d",&n1,&n2);
		mostrarEdad(lista,num,p,n1,n2);
		break;
	case 3:
		puts("Muestra las personas que empiezan con la misma inicial");
		puts("Escribe la incial que quieras: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&letra);
		mismaIni(lista,num,p,letra);
		break;
	case 4:
		puts("Hasta luego");
		break;
	}
	}while(opcion!=4);

	return EXIT_SUCCESS;
}
