/*
8. imprima na tela a soma dos n´umeros de 1 a 100.
*/

#include <stdio.h>
#include <sys/types.h>

const u_int n = 100;

int main() {
    int accum = 0;

    for(u_int i = 0; i <= n; i++) {
        accum += i;
    }

    printf("%u", accum);

    return 0;
}