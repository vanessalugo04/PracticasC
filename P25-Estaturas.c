//ingresar 5 estaturas, calcular promedio e indicar cuales son mas bajas y altas
#include<stdio.h>
int main(){
	int i;
	int mayor =0, menor = 0;
	float estatura[i];
	float suma =0, promedio;
	printf("Programa para almacenar estaturas e indicar promedio.\n");
	
	for(i=0; i<5; i++){
		printf("Ingresa estatura: ");
		scanf("%f", &estatura[i]);
	}
	
	for(i=0; i<5; i++){
		suma += estatura[i];
	}
	
	promedio = suma/5;
	printf("\nEl promedio es: %f", promedio);
	
	for(i=0; i<5; i++){
		printf("\nEstatura numero %i es\t: %f", i, estatura[i]);
	}
	
	for(i=0; i<5; i++){
		if(estatura [i]< promedio){
		mayor++;
	    } else {
		   menor++;
    	}
	}
	
	printf("\nHay %i mayores al promedio", mayor);
	printf("\nHay %i menores al promedio", menor);
	
	return 0;
}
