/*
1. calcule o valor de um polinômio de grau n supondo que o usuário informou o grau do
polinômio e os coeficientes na ordem da lista ordenada a = (a0, a1, ..., an−1, an) onde ai
representa o coeficiente do termo de grau i.
*/

#include <stdio.h>

int main() {
    int grau = 0;
    float coefs[256], x = 0;

    printf("Grau: ");
    scanf("%d", &grau);

    printf("X: ");
    scanf("%f", &x);

    int i = 0;
    for(i = 0; i < grau; i++) {
        printf("a%d: ", i);
        scanf("%f", coefs + i);
    }

    float accum = 0;
    float interm = 1;

    for (i = 0; i < grau; i++) {
        accum += interm * coefs[i];
        interm *= x;
    }

    printf("Total: %f\n", accum);

    return 0;
}
