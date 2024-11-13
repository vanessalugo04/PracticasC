//ingresar tres numeros, indicar menor y mayor usando operadores logicos
#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Programa para indicar menor y mayor de tres numeros.\n");
	printf("Ingresa primer numero: ");
	scanf("%i", &num1);
	printf("Ingresa segundo numero: ");
	scanf("%i", &num2);
	printf("Ingresa tercer numero: ");
	scanf("%i", &num3);
	
	if(num1 > num2 && num1 > num3){
		if(num2 > num3){
			printf("Numero mayor: %i\nNumero menor: %i", num1, num3);
		} else {
			printf("Numero mayor: %i\nNumero menor: %i", num1, num2);
		}
	} else{
		if(num2 > num1 && num2 > num3){
			if(num1 > num3){
				printf("Numero mayor: %i\nNumero menor: %i", num2, num3);
			} else {
				printf("Numero mayor: %i\nNumero menor: %i", num2, num1);
			}
		} else{
			if(num3 > num1 && num3 > num2){
				if(num1 > num2){
					printf("Numero mayor: %i\nNumero menor: %i", num3, num2);
				} else{
					printf("Numero mayor: %i\nNumero menor: %i", num3, num1);
				}
			}
		}
	}
	
	return 0;
}
