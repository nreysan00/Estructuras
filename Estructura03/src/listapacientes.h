/*
 * listapacientes.h
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#ifndef LISTAPACIENTES_H_
#define LISTAPACIENTES_H_
#define MAXPACIENTES 30
#include "estructura03.h"
#include <string.h>

	void insertarPaciente(IMC lista[MAXPACIENTES], int *tam, IMC p);

	IMC buscarPaciente(IMC lista[MAXPACIENTES], int tam, char nombre[NOMBREMAX], IMC * p);

	void mostrarLista(IMC lista[MAXPACIENTES], int tam);

	int borrarPaciente(IMC lista[MAXPACIENTES], int tam, char nombre[NOMBREMAX]);
#endif /* LISTAPACIENTES_H_ */
