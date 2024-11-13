//recibir dos nombres y comparar sus edades
#include<stdio.h>
int main (){
	char nombre1 [21];
	char nombre2 [21];
	int edad1 = 0; 
	int edad2 =0;
	printf("Prohrama para comparar edades de dos personas.\n");
	printf("Ingresa primer nombre: ");
	gets(nombre1);
	printf("Ingresa edad de primer persona: ");
	scanf("%i", &edad1);
	
	fflush(stdin); //limpiar buffer
	
	printf("Ingresa segundo nombre: ");
	gets(nombre2);
	printf("Ingresa edad de segunda persona: ");
	scanf("%i", &edad2);
	
	if(edad1>edad2){
		printf("La persona mayor es: %s", nombre1);
	} else{ 
	printf("La persona mayor es: %s", nombre2);
	}
	
	return 0;
}
