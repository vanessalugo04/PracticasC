//metodo burbuja
#include<stdio.h>
int main(){
	int i, j, aux;
	int arreglo[5];
	printf("Programa de ordenamiento por metodo de burbuja.\n");
	for(j=0; j<5; j++){
		printf("Ingresa entero en la posicion %i: \t", j);
		scanf("%i", &arreglo[j]);
	}
	for(i=0; i<5; i++){
		for(j = 0; j<5; j++){
			if(arreglo[j] > arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}
	
	printf("\nEl orden ascendente es: ");
	for(i=0; i<5; i++){
		printf("\t%i", arreglo[i]);
	}
	
	return 0;
}
