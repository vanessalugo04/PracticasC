//usar un tercer vector y strcat para unir nombre y apellido
#include<stdio.h>
#include<string.h>
int main(){
	char nombre[21];
	char apellido[21];
	char unir[42];
	printf("Programa para unir nombre y apellido.\n");
	printf("Ingresa nombre: ");
	gets(nombre);
	printf("Ingresa apellido: ");
	gets(apellido);
	
	strcpy(unir, nombre); //copiar nombre en unir, se inicializa unir
	strcat(unir, " "); //agregar espacio para separar
	strcat(unir, apellido); //unir con apellido
	
	printf("El nombre completo es: %s", unir);
	
	
	return 0;
}
