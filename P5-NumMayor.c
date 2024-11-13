//imprimir el numero mayor
#include<stdio.h>
int main(){
	int num1 = 0;
	int num2 = 0;
	printf("Programa para saber cual de los dos numeros es mayor.\n");
	printf("Ingresa el primer numero: ");
	scanf("%i", &num1);
	printf("Ingresa el segundo numero: ");
	scanf("%i", &num2);
	
	if(num1 > num2){
		printf("El numero mayor es: %i", num1);
	} else {
		printf("El numero mayor es: %i", num2);
	}
	
	return 0;
}
