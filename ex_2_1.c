#include <stdio.h>

int main() {
    int numero;

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
