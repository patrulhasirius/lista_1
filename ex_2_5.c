/*
5. leia um número e imprima na tela se ele é negativo, nulo ou positivo.
*/

#include <stdio.h>

int main() {
    int numero = 0;

    printf("Número: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O número é nulo\n");
    } else if (numero < 0) {
        printf("O número é negativo\n");
    } else {
        printf("O número é positivo\n");
    }

    return 0;
}