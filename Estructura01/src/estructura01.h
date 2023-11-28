/*
 * estructura01.h
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#ifndef ESTRUCTURA01_H_
#define ESTRUCTURA01_H_
#define NOMBREMAX 10
#define APEMAX 30
#define EDADMAX 3

	/*
	 * Estructura para definir el nombre, primer apellido y edad de una persona
	 */
	typedef struct {
		char nombre[NOMBREMAX];
		char apellido[APEMAX];
		int edad;
	}persona;
	/*
	 * Función para pedir nombre, primer apellido y edad de una persona
	 */
	void pedirPersona(persona *c);
	/*
	 * Función para mostrar en pantalla el nombre, primer apellido y edad de una persona
	 */
	void mostrarPersona(persona c);


#endif /* ESTRUCTURA01_H_ */
