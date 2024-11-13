//ingresar 10 valores, imprimir suma y promedio
#include<stdio.h>
int main(){
	int i = 0;
	int valor, suma, promedio;
	printf("Programa para recibir 10 datos, sumarlos y sacar promedio.\n");
	for(i = 0; i <= 10; i ++){
		printf("Ingresa valor: ");
		scanf("%i", &valor);
		suma += valor;
	    promedio = suma/10;
	}

	printf("\nLa suma es: %i", suma);
	printf("\nEl promedio es: %i", promedio);
	
	return 0;
}
