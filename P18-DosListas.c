//hacer dos listas con 15 valores cada una e indicar si una es mayor o ambas iguales
#include<stdio.h>
int main(){
	int valor = 0;
	int suma1 = 0;
	int suma2 = 0;
	printf("Programa para comparar valor acumulado de dos listas.\n");
	
	int x = 1;
	printf("Pimera lista,\n");
	while(x<=15){
		printf("Ingresa valor: ");
		scanf("%i", &valor);
		suma1 += valor;
		x = x+1;
	}
	
	x = 1;
	printf("\nSegunda lista,\n");
	while(x<=15){
		printf("Ingresa valor: ");
		scanf("%i", &valor);
		suma2 += valor;
		x = x+1;
	}
	
	if(suma1 == suma2){
        printf("Las listas son iguales.");
    } else{
        if(suma1 > suma2){
            printf("La primera lista es mayor.");
        } else {
            printf("La segunda lista es mayor.");
        }
    }
	
	return 0;
}
