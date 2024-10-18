/*
11. calcule a média aritmética de quatro números fornecidos pelo usuário.
*/
#include <stdio.h>

int main() {
    double primeiro, segundo, terceiro, quarto;

    printf("primeiro: ");
    scanf("%lf", &primeiro);

    printf("segundo: ");
    scanf("%lf", &segundo);

    printf("primeiro: ");
    scanf("%lf", &terceiro);

    printf("primeiro: ");
    scanf("%lf", &quarto);

    double media = ( primeiro + segundo + terceiro + quarto) /4;

    printf("Resultado: %lf\n", media);

    return 0;
}
