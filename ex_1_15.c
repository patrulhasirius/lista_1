/*
15. leia do teclado 3 valores reais e os imprima na tela em ordem crescente.
*/

#include <stdio.h>

void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double a, b, c;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    if (a > b) { swap(&a, &b);};
    if (b > c) { swap(&b, &c);};
    if (a > b) { swap(&a, &b);};

    printf("%lf\n%lf\n%lf\n", a, b, c);

    return 0;
}
