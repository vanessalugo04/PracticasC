//comprobar si una clave es correcta segun la establecida.
//comparar una cadena leida con una especifica
#include<stdio.h>
#include<string.h>
int main(){
	char usuario[21];
	char clave[7];
	printf("Programa para comprobar si la clave es correcta.\n");
	printf("Ingresa usuario: ");
	gets(usuario);
	printf("Ingresa clave: ");
	gets(clave);
	
	if(strcmp(clave, "abc123") == 0){ //clave correcta: abc123
		printf("La clave es correcta. ");
		return 0; //retorno opcional xd
	} else {
		printf("La clave es incorrecta. ");
		return 1; //retorno opcional
	}
	
	return 0;
}
