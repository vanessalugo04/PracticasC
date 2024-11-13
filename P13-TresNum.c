/*tres numeros, si son iguales entonces,
se suma el primero con el segundo, y se multilica por el tercero*/
#include<stdio.h>
int main(){
	int x, y, z, resultado;
	printf("Programa para resolver la operacion (X + Y)*Z  si y solo si X, Y, Z son iguales.\n");
	printf("Ingresa primer numero (X): ");
	scanf("%i", &x);
	printf("Ingresa segundo numero (Y): ");
	scanf("%i", &y);
	printf("Ingresa tercer numero (Z): ");
	scanf("%i", &z);
	
	if(x == y && y == z){
		resultado = (x + y)*z;
		printf("El resultado es: %i", resultado);
	} else {
		printf("Los numeros no son iguales.");
	}
	
	return 0;
}
