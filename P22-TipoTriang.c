//ingresar los lados de un triangulo, indicar su tipo y su cantidad.
#include<stdio.h>
int main(){
	int i, lado1, lado2, lado3;
	int cont1 = 0; //equilatero
	int cont2 = 0; //isoceles
	int cont3 = 0; //escaleno
	printf("Programa para identificar tipo de triangulo.\n");
	
	for(i = 1; i <= 5; i++){
		printf("\nIngresa lado 1 del triangulo %i: \t", i);
		scanf("%i", &lado1);
		printf("Ingresa lado 2 del triangulo %i: \t", i);
		scanf("%i", &lado2);
		printf("Ingresa lado 3 del triangulo %i: \t", i);
		scanf("%i", &lado3);
		
		if(lado1 == lado2 && lado2==lado3){
			printf("El triangulo %i es equilatero.", i);
			cont1++;
		} else {
			if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
				printf("El triangulo %i es isoceles.", i);
				cont2++;
			} else {
				printf("El triangulo %i es escaleno.", i);
				cont3++;
			}
		}
	} //cierra for
	
	printf("\n\nLa cantidad de triangulos equilateros es: %i\n", cont1);
	printf("\n\nLa cantidad de triangulos isoceles es: %i\n", cont2);
	printf("\n\nLa cantidad de triangulos escalenos es: %i\n", cont3);
	
	if(cont1<cont2 && cont1<cont3){
		printf("\nLos triangulos equilateros tienen menor cantidad.");
	} else {
		if(cont2<cont1 && cont2<cont3){
			printf("\nLos triangulos isoceles tienen menor cantidad.");
		} else {
			printf("\nLos triangulos escalenos tienen menor cantidad.");
		}
	}
	
	return 0;
}
