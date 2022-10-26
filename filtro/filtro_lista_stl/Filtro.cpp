/**
 * Project Untitled
 */


#include "Filtro.h"
#include <iostream>

/**
 * Filtro implementation
 */
Filtro::Filtro(unsigned char tamano){
    _tamano = tamano;
    _memoria.clear();
}

/**
 * @param a
 * @return void
 */
bool Filtro::agregarDato(float a) {
	// Escrir el código para garantizar el tamaño fijo de la ventana de muestras
    return true;
}

/**
 * @return float
 */
float Filtro::promedio() {
    float prom;
    // Escribir el código para calcular el promedio de los datos de la lista

    return prom;
}

float& Filtro::salida_filtro(float &a){
	float prom = promedio();
	agregarDato( a );
	return (a -= prom);
}



