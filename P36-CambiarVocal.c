//cambiar vocales por un guion -
#include<stdio.h>
int main(){
	char cadena[20];
	int i = 0;
	printf("Programa para cambiar las vocales de una palabra por un guion.\n");
	printf("Ingresa una palabra: ");
	gets(cadena);
	
	while(cadena[i] != '\0'){
		if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
		{
		cadena [i] = '-';
	    }	
	    i++;
	}
	
	printf("\nLa palabra modificada es: %s", cadena);
	getch();
	return 0;
}
