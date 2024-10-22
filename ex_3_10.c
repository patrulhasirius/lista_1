/*
10. leia dois números a e b e calcule a potência a^b sem utilizar uma função nativa do C.
*/

#include <stdio.h>
#include <sys/types.h>

int main() {
    u_int a = 0, b = 0, accum = 0;

    printf("a: ");
    scanf("%u", &a);

    printf("b: ");
    scanf("%u", &b);
    accum = a;

    for(u_int i = 1; i < b; i++) {
        accum *= a;
    }

    printf("%u\n", accum);

    return 0;
}