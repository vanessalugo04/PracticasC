/*ingresar 3 notas de alumno, calcular promedio
e imprimir si aprobo*/
#include<stdio.h>
int main(){
	float matematicas = 0;
	float biologia = 0;
	float fisica = 0;
	float calif;
	
	printf("Programa para saber si un alumno aprobo o no.\n");
	printf("Ingresa la calificacion de matematicas: ");
	scanf("%f", &matematicas);
	printf("Ingresa la calificacion de biologia: ");
	scanf("%f", &biologia);
	printf("Ingresa la calificacion de fisica: ");
	scanf("%f", &fisica);
	
	calif = (matematicas + biologia + fisica)/3;
	
	if(calif<5){
		printf("La calificacion es de %f. El alumno aprobo", calif);
	} else{
		printf("La calificacion es de %f. El alumno reprobo", calif);
	}
	
	return 0;
}
