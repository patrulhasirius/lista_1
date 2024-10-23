/*
9. leia 6 números e imprima o cubo e a raiz cúbica de cada um deles.
*/

#include <stdio.h>
#include <math.h>


#define n 6

int main() {
    float numeros[n] = {0};

    int i = 0;
    for(i = 0; i < n; i++) {
        printf("Número %u: ", i + 1);
        scanf("%lf", numeros + i);
    }

    for(i = 0; i < n; i++) {
        printf("%lf\n", numeros[i] * numeros[i] * numeros[i]);
        printf("%lf\n", powf(numeros[i], 1.0/3.0));
    }

    return 0;
}
