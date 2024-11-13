//definir si el arreglo esta en orden
#include<stdio.h>
int main(){
	int i, orden;
	int arreglo[10];
	printf("Programa para saber si los numeros estan en orden o no.\n");
	for(i=0; i<10; i++){
		printf("Ingresa un entero:\t");
		scanf("%i", &arreglo[i]);
	}
	
	orden = 1;
	for(i=0; i<9; i++){
		if(arreglo[i+1]<arreglo[i])
		{
			orden = 0;
		}
    }
		if(orden == 1){
			printf("\nEl arreglo esta en orden.");
		}else{
			printf("\nEl arreglo esta en desorden.");
		}
	
	return 0;
}
