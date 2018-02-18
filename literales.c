/*

	Programa: literales.c
	Autor: Gerardo Cardoso 
	Fecha: 16/02/18
	Objetivo: mostrar los tipos de literales en c
	
*/

#include<stdio.h>
#include<stdlib.h>

#define	ENTERO 1234
#define LARGO 123456l
#define CORTO 10
#define	SIN_SIGNO 1234567u
#define	HEXA 0x123f
#define	OCTAL 01234

#define REAL 12345678.5f
#define	DOBLE 123456789012345.5
#define	DOBLE_LARGO 12345678901234567890.5

#define	CARACTER 'M'
#define	SALTO '\n'
#define	CADENA "Hola Mundo"
#define	NULO NULL

int main(){

	system("cls");	
	printf("Entero decimal: %d",ENTERO);
	printf("\n Entero largo: %ld", LARGO);
	printf("\n Entero corto: %d", CORTO);
	printf("\n Entero sin signo: %u", SIN_SIGNO);
	printf("\n Hexadecimal: %x",HEXA);
	printf("\n OCTAL: %o", OCTAL);
	printf("\n Flotante: %f",REAL);
	printf("\n Flotante formato: %5.1f",REAL);
	printf("\n Doble: %lf", DOBLE);
	printf("\n Doble largo: %e", DOBLE_LARGO);
	printf("\n Caracter: %d", CARACTER);
	printf("\n Cadena: %s",CADENA);
	printf("\n Nulo: %s",NULO);
	printf("%c%c%c%c     Cadena: %s",SALTO, SALTO, SALTO, SALTO, CADENA);
	
	
	getchar();
	return 0;
	
	
}

