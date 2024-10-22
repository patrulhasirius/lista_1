/*
4. imprima na tela todos os números pares entre 0 e 20.
*/

#include <stdio.h>

const int n = 20;

int main() {
    int i = 0;

    for(i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%u\n", i);
        }
        
    }

    return 0;
}