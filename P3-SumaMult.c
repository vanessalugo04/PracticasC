//introducir dos numeros, suma y mult
#include<stdio.h>
int main(){
	int num1 = 0;
	int num2 = 0;
	int suma = 0;
	int mult = 0;
	printf("Programa para suamr y multiplicar dos numeros.\n");
	printf("Ingresa el primer numero: ");
	scanf("%i", &num1);
	printf("Ingresa el segundo numero: ");
	scanf("%i", &num2);
	
	suma = num1 + num2;
	mult = num1 * num2;
	
	printf("El resultado de la suma es: %i\n", suma);
	printf("El resultado de la multiplicacion es: %i", mult);
	
	return 0;
}
