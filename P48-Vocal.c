#include <stdio.h>
#include <string.h>

void vocal(char voc);

int main() {
    int i;
    char palabra[20];
    
    printf("Programa para identificar las vocales de una palabra.\n");
    printf("Ingresa palabra, puede ser en mayusculas o minusculas: ");
    fgets(palabra, 20, stdin); 

    // Recorremos cada carácter de la palabra y pasamos cada uno a la función
    for (i = 0; palabra[i] != '\0'; i++) {
        vocal(palabra[i]);
    }
    
    return 0;
}

void vocal(char voc) {
    if (voc == 'A' || voc == 'E' || voc == 'I' || voc == 'O' || voc == 'U' ||
        voc == 'a' || voc == 'e' || voc == 'i' || voc == 'o' || voc == 'u') {
        printf("La vocal es: %c\n", voc);
    }
}

