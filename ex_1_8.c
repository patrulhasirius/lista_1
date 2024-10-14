#include <stdio.h>

int main() {

    double a, b;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    double solucao = b / a;

    printf("solução: %lf\n", solucao);

    return 0;
}
