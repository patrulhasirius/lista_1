/*
15. leia do teclado 3 valores reais e os imprima na tela em ordem crescente.
*/

#include <stdio.h>

// que função feia
void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a = 0, b = 0, c = 0;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if (a > b) { swap(&a, &b);};
    if (b > c) { swap(&b, &c);};
    if (a > b) { swap(&a, &b);};

    printf("%f\n%f\n%f\n", a, b, c);

    return 0;
}
