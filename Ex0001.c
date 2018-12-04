/*
 * Esto es una prueba
 */

#include "funciones.h"
#include <stdio.h>

#define NUM 93

int main ( void ) {
	//int num = 4;
	
	printf( "El cuadrado de %d es %d\n", NUM, cuadrado( NUM ) );
	printf( "El cuadrado de %d es %d\n", NUM, potencia( NUM ) );

	return 0;
}
