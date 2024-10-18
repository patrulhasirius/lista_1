/*
1. leia um número e imprima na tela o seu dobro se ele for menor do que 10. Se o número
for de 10 até 20, imprima a sua metade. Em qualquer outro caso, imprima na tela que o
número não é válido.
*/

#include <stdio.h>

int main() {
    int numero = 0;

    printf("Número: ");
    scanf("%d", &numero);

    if (numero < 10) {
        printf("%d\n", numero * 2);
    } else if (numero >= 10  & numero <= 20) {
        printf("%d\n", numero / 2);
    } else {
        printf("O número não é válido\n");
    }

    return 0;
}
