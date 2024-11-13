//sumar vectores
#include<stdio.h>
int main(){
	int i;
	int vectora[5];
	int vectorb[5];
	int suma[5];
	printf("Programa para sumar dos vectores, elemento a elemento.\n");
	for(i=1; i<=5; i++){
		printf("Ingresa elemento %i del vector a:\t", i);
		scanf("%i", &vectora[i]);
	}
	for(i=1; i<=5; i++){
		printf("Ingresa elemento %i del vector b:\t", i);
		scanf("%i", &vectorb[i]);
	}
	for(i=1; i<=5; i++){
		suma[i] = vectora[i] + vectorb[i];
	}
	
	for(i=1; i<=5; i++){
		printf("\nLa suma es:\t %i", suma[i]);
	}
	
	
	return 0;
}
