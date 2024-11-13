//programa para indicar cantidad de digitos
#include <stdio.h>
int main() {
    int num;

    printf("Programa para indicar cantidad de digitos de un numero del 0 al 999.\n");

    do {
        printf("\nIngresa numero: ");
        scanf("%i", &num);

        if (num > 999 || num < 0) {
            printf("ERROR");
        } else {
            if (num == 0) {
                printf("\nLa cantidad de digitos es 1"); 
            } else if (num <= 9) {
                printf("\nLa cantidad de digitos es 1");
            } else if (num <= 99) {
                printf("\nLa cantidad de digitos es 2");
            } else {
                printf("\nLa cantidad de digitos es 3");
            }
        }
    } while (num != 0);

    return 0;
}

