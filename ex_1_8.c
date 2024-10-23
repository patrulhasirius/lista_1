/*
8. resolva a equação linear a.x = b
*/
#include <stdio.h>

int main() {

    float a = 0, b = 0;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    float solucao = b / a;

    printf("solução: %f\n", solucao);

    return 0;
}
