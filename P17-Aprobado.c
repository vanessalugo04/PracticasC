//ingresar calif de 10 materias e indicar aprobadas y reprobadas
#include<stdio.h>
int main(){
	int materia=1; //cantidad de materias
	float calif = 0; //calificacion
	
	printf("Programa para ingresar notas e indicar aprobado o reprobado.\n");
	
	while(materia <= 10){
		printf("Ingresa calificacion de la materia numero %i: ", materia);
	    scanf("%f", &calif);
	    materia = materia + 1;
	    if(calif<0 || calif>10){
	    	printf("ERROR");
	    	return 1;
		} else{
			if(calif>=6){
				printf("Aprobado.\n");
			} else{
				printf("Reprobado.\n");
			}
		}
	}
	
	return 0;
}
