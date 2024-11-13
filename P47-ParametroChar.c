#include <stdio.h>
#include <string.h>

void inicial(char inic); 

int main() {
    char nombre[20];
    printf("Programa para conocer inicial de un nombre.\n");
    printf("Ingresa nombre: ");
    fgets(nombre, 20, stdin);  
    inicial(nombre[0]);  // Pasamos el primer carácter de la cadena
    return 0;
}

void inicial(char inic) {
    printf("La inicial es: %c\n", inic);
}

