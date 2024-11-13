//ingresar dos valores y despues el simbolo de la operacion
#include<stdio.h>
int main (){
	int num1 = 0; 
	int num2 = 0;
	char simb;
	int resultado;
	printf("Programa para hacer operaciones basicas de dos numeros.\n");
	printf("Ingresa primer entero: ");
	scanf("%i", &num1);
	printf("Ingresa segundo entero: ");
	scanf("%i", &num2);
	
	printf("Ingresa una opcion: +, -, *, /: ");
	scanf(" %c", &simb);
	
	if(simb != '+' && simb != '-' && simb != '*' && simb != '/'){
		printf("Simbolo no valido.");
		return 1;
	}
	
	switch (simb){
		case '+': 
		resultado = num1 + num2;
		printf("El resultado de la suma de %i + %i es: \t%i", num1, num2, resultado);
		break;
		case '-': 
		resultado = num1 - num2;
		printf("El resultado de la resta de %i - %i es: \t%i", num1, num2, resultado);
		break;
		case '*': 
		resultado = num1 * num2;
		printf("El resultado de la multiplicacion de %i * %i es: \t%i", num1, num2, resultado);
		break;
		case '/': 
		resultado = num1 / num2;
		printf("El resultado de la division de %i / %i es: \t%i", num1, num2, resultado);
		break;
    }

	return 0;
}
