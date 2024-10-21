/*
6. imprima na tela todos os n´umeros de 1 a 100.
*/

#include <stdio.h>
#include <sys/types.h>

const u_int n = 100;

int main() {
    for(u_int i = 1; i <= 100; i++) {
        printf("%u\n", i);
    }

    return 0;
}