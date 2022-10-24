/*
 ============================================================================
 Name        : ParcialUno.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



float aplicarDescuento(float precio, int descuento);
int contarCaracteres(char cadena[], char caracter);

int main(void) {

	float precioDescuento;
	char cadena[] = "aconcagua";
	int contCaracter=0;


	precioDescuento = aplicarDescuento(100,5);
	printf("El precio con descuento es: %.2f", precioDescuento);

	contCaracter= contarCaracteres(cadena, 'a');
	printf("\nEl caracter se repite: %d", contCaracter);
}


float aplicarDescuento(float precio, int descuento){

	float resultado;


	resultado = precio - precio * descuento/100;

	return resultado;
}

 int contarCaracteres(char cadena[], char caracter){

	 int contCaracter=0;

	 for(int i = 0; i < strlen(cadena); i++){
		  if(cadena[i] == caracter){
			  contCaracter= contCaracter +1;
		  }
	 }
	 return contCaracter;
}



