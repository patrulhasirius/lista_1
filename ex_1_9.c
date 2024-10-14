#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    double delta = sqrt( b * b - (4 * a * c));
    double resultado_1 = (2 * c) / (-b + delta);
    double resultado_2 = (2 * c) / (-b - delta);

    printf("Primeiro resultado: %lf\n", resultado_1);
    printf("Segundo resultado: %lf\n", resultado_2);

    return 0;
}
