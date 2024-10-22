/*
7. imprima na tela todos os números pares de 0 a 100.
*/

#include <stdio.h>

const int n = 100;
int main() {
    for(int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%u\n", i);
        }
    }

    return 0;
}