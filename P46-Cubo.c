#include<stdio.h>
#include<string.h>
//Calcular el cubo de 5 num. Paso de parametros por valor.
int cubo(int x);
int main(){
	int i;
	int num[3];
	printf("Programa para calcular el cubo de 3 numeros.\n");
	for(i = 0; i < 3; i++){
		printf("Ingresa numero: ");
		scanf("%i", &num[i]);
		getchar();
		printf("El cubo es: %i\n", cubo(num[i]));
	}
	
	return 0;
}

int cubo(int x){
	return x * x* x;
}
