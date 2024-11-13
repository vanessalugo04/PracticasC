/*Calcular el porcentaje de repuestas correctas segun la cantidad de estas
Imprimir porcentaje y dar un breve informe
Video 19*/
#include<stdio.h>
int main(){
	int cantidad, respuesta;
	float resultado;
	
	printf("Programa para saber el desarrollo del trabajador durante el test.\n");
	printf("Ingresa cantidad de preguntas: ");
	scanf("%i", &cantidad);
	printf("Ingresa cantidad de respuestas correctas: ");
	scanf("%i", &respuesta);
	
	resultado = (respuesta * 100)/cantidad; //regla de 3 para sacar porcentaje
	
	if(resultado>=60){
		if(resultado >=80){
			printf("El resultado es %.2f%. Felicidades", resultado);
		} else{
			printf("El resultado es %.2f%. Bien hecho", resultado);
		}
	} else {
		if(resultado>=40){
			printf("El resultado es %.2f%. Puede mejorar", resultado);
		} else {
			printf("El resultado es %.2f%. No se esforzo lo suficiente", resultado);
		}
	}
	
	return 0;
}

