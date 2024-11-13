/*vector de 8: valor acumulado total, valor acumulado de elementos >36,
cantidad de valores mayores de 50*/
#include<stdio.h>
int main(){
	int valor[8];
	int i, suma =0, suma2=0, cantidad =0;
	printf("Programa para calcular diferentes operaciones a partir de un arreglo de 8 elementos.\n");
	
	for(i=0; i<8; i++){
		printf("\nIngresa valor:");
		scanf("%i", &valor[i]);
	}
	
	for(i=0; i<8; i++){
	 	printf("\nEl valor es:\t %i", valor[i]);
	}
	
	for(i=0; i<8; i++){
	 	suma +=valor[i];
	}
	
	for(i=0; i<8; i++){
	 	if(valor[i]>36){
			suma2 +=valor[i];
		}
	}
	
	for(i=0; i<8; i++){
	 	if(valor[i]>50){
			cantidad++;
		}
	}
	
	printf("\n\nEl valor acumulado total es:\t %i", suma);
	printf("\nEl valor acumulado de los valores mayores de 36 es:\t %i", suma2);
	printf("\nLa cantidad de valores mayores de 50 es:\t %i", cantidad);
	 
	 return 0;
}
