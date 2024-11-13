//mostrar cantidad de caracteres de una palabra
#include<stdio.h>
int main(){
	char palabra[100];
	int i;
	printf("Programa para contar la cantidad de caracteres de una palabra.\n");
	printf("Ingrese una palabra: ");
	gets(palabra);
	
	while (palabra[i] != '\0')
	{
		i++;
	}
	
	printf("La palabra %s tiene %i caracteres.", palabra, i);
	
	return 0;
}
