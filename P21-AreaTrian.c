//ingresar base y altura de 12 triangulos, imrpimir datos y area
#include<stdio.h>
int main(){
	int i, j, base, altura, area;
	printf("Programa para calcular area de 12 triangulos.\n");
	for(i = 1; i <= 12; i++){
		printf("Ingresa base del traingulo %i: ", i);
		scanf("%i", &base);
		printf("Ingresa altura del traingulo %i: ", i);
		scanf("%i", &altura);
		area = (base * altura)/2;
		printf("La base del triangulo %i es: %i\n", i, base);
		printf("La altura del triangulo %i es: %i\n", i, altura);
		printf("El area del triangulo %i es: %i\n", i, area);
	}
	
	return 0;
}
