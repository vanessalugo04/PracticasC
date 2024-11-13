//ingresar sueldo, si rebasa 50000 debe abonar 
#include<stdio.h>
int main (){
	int sueldo;
	printf("Programa para saber si debe abonar o no.\n");
	printf("Ingrese su sueldo mensual: ");
	scanf("%i", &sueldo);
	
	if(sueldo > 50000)
		printf("Debe abonar impuestos, no huya del SAT");
	
	
	return 0;
}
