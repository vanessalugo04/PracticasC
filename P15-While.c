//Usando while, recibir datos de pagos y sumarlos
#include<stdio.h>
int main(){
	float pago = 0;
	float suma = 0;
	printf("Programa para sumar datos de pagos.\n");
	printf("Ingresa dato de pago: ");
	scanf("%f", &pago);
	
	while(pago){
		suma += pago;
	    printf("Ingresa siguiente dato de pago: ");
	    scanf("%f", &pago);
	}
	
	printf("La suma de los pagos es: %f", suma);
	return 0;
}
