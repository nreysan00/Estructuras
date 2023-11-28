/*
 * estructura02.h
 *
 *  Created on: 22 nov 2023
 *      Author: Usuario
 */

#ifndef ESTRUCTURA02_H_
#define ESTRUCTURA02_H_

	/*
	 * Estructura para hacer operaciones con fracciones
	 */
	typedef struct {
		int numerador;
		int denominador;
	}frac;

	/*
	 * Función para pedir fracciones por pantalla
	 */
	void pedirFrac(frac *c);

	/*
	 * Función para mostrar por pantalla las fracciones
	 */
	void mostrarFrac(frac c);

	/*
	 *Función para dividir fracciones
	 */
	void divFrac(frac c, frac c2, frac *c3);

	/*
	 *Función para multiplicar fracciones
	 */
	void multFrac(frac c, frac c2, frac *c3);

	void sumaFrac(frac c, frac c2, frac *c3);

	void resFrac(frac c, frac c2, frac *c3);
#endif /* ESTRUCTURA02_H_ */
