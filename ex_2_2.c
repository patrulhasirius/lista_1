#include <math.h>
#include <stdio.h>

int main() {
    double numero;

    printf("Número: ");
    scanf("%lf", &numero);

    if (floor(numero) != numero | numero < 0) {
        printf("Este número não é válido.\n");
    } else if ((int)numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }
}
