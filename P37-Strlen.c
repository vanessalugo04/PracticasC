//usar funciones basicas de string
#include<stdio.h>
#include<string.h> //libreria
int main(){
	char palabra [21];
	printf("Programa para contar caracteres de una palabra.\n");
	printf("Ingresa palabra: ");
	gets(palabra);
	
	int cantidad; 
	cantidad = strlen(palabra); //funcion strlen para contar
	
	printf("La palabra %c tiene %i caracteres.", palabra, cantidad);
	
	return 0;
}
