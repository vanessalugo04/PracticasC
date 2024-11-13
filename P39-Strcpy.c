//escribir dos nombres e impimir el que tenga mayor cantidad de caracteres usando un tercer vector
#include<stdio.h>
#include<string.h>
int main(){
	char nombre1[21];
	char nombre2[21];
	char aux[21];
	printf("Programa para recibir dos nombres e imprimir el de mayor caracteres.\n");
	printf("Ingresa primer nombre: ");
	gets(nombre1);
	fflush(stdin);
	printf("Ingresa segundo nombre: ");
	gets(nombre2);
	fflush(stdin);
	
	if(strlen(nombre1) == strlen(nombre2)){
		printf("Ambos nombres tienen la misma cantidad de caracteres.");
	} else {
		if(strlen(nombre1) > strlen(nombre2)){
			strcpy(aux, nombre1);
			printf("El nombre %s tiene mayor cantidad de caracteres.", aux);
		} else {
			strcpy(aux, nombre2);
			printf("El nombre %s tiene mayor cantidad de caracteres.", aux);
		}
	}
	
	
	return 0;
}
