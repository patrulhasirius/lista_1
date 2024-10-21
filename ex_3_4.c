/*
4. imprima na tela todos os n´umeros pares entre 0 e 20.
*/

#include <stdio.h>
#include <sys/types.h>

const u_int n = 20;

int main() {
    u_int i = 0;

    for(i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%u\n", i);
        }
        
    }

    return 0;
}