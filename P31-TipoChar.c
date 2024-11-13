//cadena char
#include<stdio.h>
int main(){
	char letra1=65;
	char letra2='A';
	char letra3;
	
	printf("Ingresa un caracter: ");
	scanf(" %c", &letra3); //importante el espacio
	
	printf("\nLa letra 1 es:\t %c ", letra1);
	printf("\nLa letra 2 es:\t %c ", letra2);
	printf("\nLa letra 3 es:\t %c ", letra3);
	
	return 0; 
}
