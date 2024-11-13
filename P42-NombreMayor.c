//comparar dos nombres, imprimir cant de char y cual es mayor
#include<stdio.h>
#include<string.h>
int main(){
	char nombre1[20];
	char nombre2[20];
	int cantidad1 = 0;
	int cantidad2 = 0;
	printf("Programa para comparar dos nombres.\n");
	printf("Ingresa primer nombre: ");
	fgets(nombre1, 20, stdin);
	printf("Ingresa segundo nombre: ");
	fgets(nombre2, 20, stdin);
	
	cantidad1 = strlen(nombre1); //funcion strlen para contar
	cantidad2 = strlen(nombre2);
	
	
	if(cantidad1 == cantidad2){
		printf("Ambos nombres tienen la misma cantidad de caracteres: %i", cantidad1-1);
	} else {
		if(cantidad1 > cantidad2){
		printf("\nEl mayor es el nombre %s tiene %i caracteres.", nombre1, cantidad1-1);
	    printf("\nEl menor es el nombre %s tiene %i caracteres.", nombre2, cantidad2-1);
	} else {
		printf("\nEl mayor es el nombre %s tiene %i caracteres.", nombre2, cantidad2-1);
	    printf("\nEl menor es el nombre %s tiene %i caracteres.", nombre1, cantidad1-1);
	}
	}
	
	
	return 0;
}
