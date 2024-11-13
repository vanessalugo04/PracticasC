//almacenar suedos de dos turnos con 4 personas cada uno e imprimir
#include<stdio.h>
int main(){
	int i, j;
	float matutino[4];
	float vespertino[4];
	float sueldom, sueldov, gastom, gastov;
	printf("Programa para almacenar e imprimir sueldos.\n");
	for(i=1; i<=4; i++){
		printf("\nIngresa sueldo %i turno matutino: \t", i);
		scanf("%f", &sueldom);
		gastom += sueldom;
	}
	
	for(j=1; j<=4; j++){
		printf("\nIngresa sueldo %i turno vespertino: \t", j);
		scanf("%f", &sueldov);
		gastov += sueldov;
	}
	
	for(i=1; i<=4; i++){
		printf("\nEl sueldo %i del turno matutino es:\t %f ", i, sueldom);
	}
	printf("\nEl gasto total del turno matutino es:\t %f", gastom);
	
	for(j=1; j<=4; j++){
		printf("\nEl sueldo %i del turno matutino es:\t %f ", j, sueldov);
	}
	printf("\nEl gasto total del turno vespertino es:\t %f", gastov);
	
	return 0;
}
