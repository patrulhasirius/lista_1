/*
3. leia cinco números e imprima na tela o quadrado de cada um deles
*/

#include <stdio.h>
#include <sys/types.h>

#define n 5

int main() {
    double numeros[n] = {0};

    u_int i = 0;
    for(i = 0; i < n; i++) {
        printf("Número %u: ", i + 1);
        scanf("%lf", numeros + i);
    }

    for(i = 0; i < n; i++) {
        printf("%lf\n", numeros[i] * numeros[i]);
    }

    return 0;
}
