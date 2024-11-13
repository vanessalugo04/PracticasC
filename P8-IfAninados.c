/*calcular promedio de 3 calificaciones, si es mayor de 8 aprobado,
si es mayor a 6 y menor de ocho imprimir regular, y si es menor a 6 reprobado
Usar condicional aninado*/
#include<stdio.h>
int main(){
	float matematicas = 0;
	float biologia = 0;
	float fisica = 0;
	float calif = 0;
	
	printf("Programa para conocer el desempeño de un alumno\n");
	printf("Ingresa la calificacion de matematicas: ");
	scanf("%f", &matematicas);
	printf("Ingresa la calificacion de biologia: ");
	scanf("%f", &biologia);
	printf("Ingresa la calificacion de fisica: ");
	scanf("%f", &fisica);
	
	calif = (matematicas + biologia + fisica)/3;
	
	if(calif>=8){
		printf("Promedio alto.\nLa calificacion es %.2f", calif);
	} else{
		if(calif>=6){
			printf("Promedio regular.\nLa calificacion es %.2f", calif);
		} else{
			printf("Promedio bajo.\nLa calificacion es %.2f", calif);
		}
	}
	
	return 0;
}
