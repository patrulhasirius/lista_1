/*
8. resolva a equação linear a.x = b
*/
#include <stdio.h>

int main() {

    float a = 0, b = 0;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    float solucao = b / a;

    printf("solução: %lf\n", solucao);

    return 0;
}
