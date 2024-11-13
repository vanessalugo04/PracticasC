/*ingresar 3 nombres, guardarlos en un cuarto string y separarlos por orden
alfabetico separados por una coma*/
#include<stdio.h>
#include<string.h>
int main(){
	char nombre1[21];
	char nombre2[21];
	char nombre3[21];
	char total [63];
	printf("Programa para ordenar nombres.\n");
	
	printf("Ingresa primer nombre: ");
	fgets(nombre1, 20, stdin);
	printf("Ingresa segundo nombre: ");
	fgets(nombre2, 20, stdin);
	printf("Ingresa tercer nombre: ");
	fgets(nombre3, 20, stdin);
	
	if (strcmp(nombre1, nombre2) <= 0 && strcmp(nombre1, nombre3) <= 0) {
        strcpy(total, nombre1);
        strcat(total, ", ");
        if (strcmp(nombre2, nombre3) <= 0) {
            strcat(total, nombre2);
            strcat(total, ", ");
            strcat(total, nombre3);
        } else {
            strcat(total, nombre3);
            strcat(total, ", ");
            strcat(total, nombre2);
        }
    } else if (strcmp(nombre2, nombre1) <= 0 && strcmp(nombre2, nombre3) <= 0) {
        strcpy(total, nombre2);
        strcat(total, ", ");
        if (strcmp(nombre1, nombre3) <= 0) {
            strcat(total, nombre1);
            strcat(total, ", ");
            strcat(total, nombre3);
        } else {
            strcat(total, nombre3);
            strcat(total, ", ");
            strcat(total, nombre1);
        }
    } else {
        strcpy(total, nombre3);
        strcat(total, ", ");
        if (strcmp(nombre1, nombre2) <= 0) {
            strcat(total, nombre1);
            strcat(total, ", ");
            strcat(total, nombre2);
        } else {
            strcat(total, nombre2);
            strcat(total, ", ");
            strcat(total, nombre1);
        }
    }

    printf("El orden alfabético de los nombres es: %s\n", total);
    
    system("pause");
    return 0;
}
