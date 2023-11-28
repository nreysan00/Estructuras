/*
 * Estrucutra05.h
 *
 *  Created on: 27 nov 2023
 *      Author: Usuario
 */
#include <string.h>
#ifndef ESTRUCUTRA05_H_
#define ESTRUCUTRA05_H_
#define MAX 50
#define MAXNOMBRE 30
#define MAXDIREC 50

	typedef struct{
		char nombre[MAXNOMBRE];
		char direc[MAXDIREC];
		int numtel;
		int edad;
	}persona;

	void pedirPersona(persona *p);

	void mostrarPersona(persona p);

	int insertarPersona(persona lista[MAX], int tam, persona p);

	void mostrarPersonas(persona lista[MAX], int tam, persona p);

	void mismaIni(persona lista[MAX], int tam, persona p, char letra);

	void mostrarEdad(persona lista[MAX], int tam, persona p, int n1, int n2);

#endif /* ESTRUCUTRA05_H_ */
