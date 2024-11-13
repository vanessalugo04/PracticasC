//hallar superficie de un cuadrado conociendo el valor de un lado
#include<stdio.h>
int main(){
	float lado = 0;
	float area;
	printf("Programa para calcular el area de un cuadrado.\n");
	printf("Ingresa el valor de un lado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	
	printf("El area del cuadrado es: %.2f", area);
	
	return 0;
}
