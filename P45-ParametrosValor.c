#include<stdio.h>
/*programa para comparar dos numeros e imprimir cual es el mayor y menor. 
Usa paso de parametros por valor*/

void NumeroMayorMenor(int v1, int v2);

int main(){
	int num1 = 0;
	int num2 = 0;
	
	printf("Programa para comparar dos numeros.\n");
	printf("Ingresa primer numero: ");
	scanf("%i", &num1);
	printf("Ingresa segundo numero: ");
	scanf("%i", &num2);
	NumeroMayorMenor(num1, num2);
	
	return 0;
}

void NumeroMayorMenor(int v1, int v2){ //v1 y v2 son parametros
	if(v1>v2)
		printf("El numero mayor es: %i", v1);
	else
		printf("El numero mayor es: %i", v2);
}
