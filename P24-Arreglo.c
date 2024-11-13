//Almacenar 5 sueldos e imprimir
#include<stdio.h>
int main(){
	int i;
	int sueldos[5];
	printf("Programa para almacenar sueldos.\n");
	for(i=0; i<=5; i++){
		printf("Ingresa sueldo: ");
		scanf("%i", &sueldos[i]);
	}
	
	for(i=0; i<=5; i++){
		printf("El sueldo es: %i\n", sueldos[i]);
	}
	return 0;
}
