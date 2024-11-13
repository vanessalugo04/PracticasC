//contar vocales
#include<stdio.h>
int main(){
	char cadena[20];
	int vocal, i;
	printf("Programa para contar las vocales.\n");
	printf("Ingresa una cadena en minusculas: ");
	gets(cadena);
	
	while(cadena[i] != '\0'){
		if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u'){
			vocal ++;
		}
		i++;
	}
	
	printf("La palabra %s tiene %i vocales.", cadena, vocal);
	
	return 0;
}
