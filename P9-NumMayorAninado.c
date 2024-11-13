//mostrar el mayor de tres numeros
#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Programa para conocer el entero mayor de tres opciones\n");
	printf("\nIngresa primer numero: ");
	scanf("%i", &num1);
	printf("\nIngresa segundo numero: ");
	scanf("%i", &num2);
	printf("\nIngresa tercer numero: ");
	scanf("%i", &num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("El numero mayor es: %i", num1);
		} else{
			printf("El numero mayor es: %i", num3);
		}
	} else {
		if(num2>num3){
			printf("El numero mayor es: %i", num2);
		} else {
			printf("El numero mayor es: %i", num3);
		}
	}
	
	return 0;
}
