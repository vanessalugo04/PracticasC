//comparar que nombre es mayor alfabeticamente (tabla ascii) usando strcmp
#include<stdio.h>
#include<string.h>
int main(){
	char nombre1[21];
	char nombre2[21];
	printf("Programa para comparar que nombre es mayor alfabeticamente.\n");
	
	printf("Ingresa primer nombre: ");
	gets(nombre1);
	fflush(stdin);
	printf("Ingresa segundo nombre: ");
	gets(nombre2);
	fflush(stdin);
	
	int strcmp (nombre1, nombre2); //funcion que realiza la comparacion
	
	if(strcmp (nombre1, nombre2) == 0){
		printf("Ambos nombres tienen el mismo valor alfabetico.");
	} else {
		if (strcmp (nombre1, nombre2) > 0){
			printf("El primer nombre tiene mayor valor alfabetico.");
		} else {
			printf("El segundo nombre tiene mayor valor alfabetico.");
		}
	}
	
	return 0;
}
