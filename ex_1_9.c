/*
9. resolva uma equação do segundo grau
*/

#include <math.h>
#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    float delta = sqrt( b * b - (4 * a * c));

    // https://pavpanchekha.com/blog/accurate-quadratic.html
    float resultado_1 = (2 * c) / (-b + delta);
    float resultado_2 = (2 * c) / (-b - delta);

    printf("Primeiro resultado: %f\n", resultado_1);
    printf("Segundo resultado: %f\n", resultado_2);

    return 0;
}
