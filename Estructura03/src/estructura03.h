/*
 * estructura03.h
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#ifndef ESTRUCTURA03_H_
#define ESTRUCTURA03_H_
#define NOMBREMAX 20

	/*
	 * Estructura para definir el nombre, peso y altura de una persona
	 */
	typedef struct {
		char nombre[NOMBREMAX];
		float peso;
		float altura;
	}IMC;

	/*
	 * Función que pide nombre, peso y altura por pantalla
	 */
	void pedirIMC(IMC *c);

	/*
	 * Función que muestra nombre, peso y altura en pantalla
	 */
	void mostrarIMC(IMC c);

	/*
	 * Función para el cálculo del IMC
	 */
	float calcIMC(IMC c);

#endif /* ESTRUCTURA03_H_ */
