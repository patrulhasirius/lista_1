/*
8. imprima na tela a soma dos números de 1 a 100.
*/

#include <stdio.h>

const int n = 100;

int main() {
    int accum = 0;

    for(int i = 0; i <= n; i++) {
        accum += i;
    }

    printf("%u", accum);

    return 0;
}