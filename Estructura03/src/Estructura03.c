/*
 ============================================================================
 Name        : Estructura03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "estructura03.h"
#include "listapacientes.h"

int main(void) {
	IMC pac;
	int tam=0,opcion,num;
	char nombre[NOMBREMAX];

	puts("Programa de gestión de clínica de adelgazamiento");

	do{

	puts("1.Contar pacientes. ");
	puts("2.Mostrar pacientes. ");
	puts("3.Añadir paciente. ");
	puts("5.Calcular IMC paciente. ");
	puts("0.Salir ");

	switch(opcion){
	case 1:
		printf("\nEn la lista hay ahora mismo %d pacientes",num);
		break;
	case 2:
		printf("\nListado de pacientes:\n ");
		break;
	case 3:
		puts("Alta de paciente");
		puts("Introduce al paciente ");
		pac=pedirPaciente();

		puts("Añadiendo paciente a la BBDD... ");
		insertarPaciente(lista, &num, pac);
		break;
	case 4:
		printf("\nNombre del Paciente a buscar: ");
		fflush(stdout);
		fgets(nombre, MAXNOMBRE, stdin);
		nombre[strlen(nombre)-1='\0'];

		if(buscarPaciente(lista, num, nombre, &pac)) {
			printf("\nPaciente encontrado: ");
			mostrarPaciente(pac);
		}else{
			printf("\nPaciente %s no encontrado.", nombre);
		}
		break;
	case 5:
		printf("\nNombre del Paciente");
		fflush(stdin);
		fflush(stdout);
		fgets(nombre, NOMBREMAX, stdin);
		nombre[strlen(nombre)-1='\0'];
		if(buscarPaciente(lista,num,nombre,&pac)){
			printf("\nPaciente encontrado:");
			mostrarPaciente(pac);
			printf("\nÍndice de masa corporal: %.2lf",calcIMC(pac));
		}else{
			printf("\nPaciente %s No encontrado.",nombre);
		}
		break;
	case 6:
		printf("\nNombre del Paciente a eliminar: ");
		fflush(stdout);
		fflush(stdin);
		fgets(nombre, NOMBREMAX, stdin);
		nombre[strlen(nombre)-1='\0'];

		num=borrarPaciente(lista,num,nombre);
		if(num==numOld){
			printf("\nPaciente no encontrado.");
		}else{
			printf("\nSe ha eliminado el paciente %s. Quedan %d pacientes ",nombre,num);
		}
		break;
	}

	}while(opcion!=0);
//	puts("¡Calcula el IMC de dos personas!");
//
//	puts("Información de la primera persona: ");
//	pedirIMC(&c);
//	mostrarIMC(c);
//
//	puts("Información de la segunda persona: ");
//	pedirIMC(&c2);
//	mostrarIMC(c2);
//
//	printf("El IMC de la primera persona es %.2f\n",calcIMC(c));
//	printf("El IMC de la primera persona es %.2f",calcIMC(c2));
	return EXIT_SUCCESS;
}
