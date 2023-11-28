/*
 * estructura04.h
 *
 *  Created on: 24 nov 2023
 *      Author: Usuario
 */

#ifndef ESTRUCTURA04_H_
#define ESTRUCTURA04_H_
#define MAXNOMBRE 30
#define MAXFECHA 2

	typedef struct{
		char nombre[MAXNOMBRE];
		int dia;
		int mes;
		int anio;
	}fecha;

	void pedirFecha(fecha *f);

	void mostrarFecha(fecha f);

#endif /* ESTRUCTURA04_H_ */
