/*
    5. Hacer una funcion que imprima los primeros "n" numeros primos.
*/

#include <stdio.h>

int main() {
    int i, j, numero, cont= 0;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }
        
        if (cont == 2) {
            printf("%i ", i);
        }

        cont = 0;
    }

    return 0;
}
