#include "funciones.h"       /*https://bytes.com/topic/c/answers/811733-tired-question*/
#include <stdio.h>
#include <math.h>

int cuadrado( int num ) {
	imprime( "Hello desde cuadrado" );
	return num * num;
}

void imprime( const char* copia ) {
	printf( "%s\n", copia );
}

int potencia( int num ) {
	return pow( num, 2 );	
}
