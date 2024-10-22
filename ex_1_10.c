/*
10. solicite o valor de um capital, o prazo de investimento, a taxa de juros, calcule e imprima
na tela o valor capitalizado.
*/

#include <math.h>
#include <stdio.h>

int main() {
    int prazo = 0;
    double capital = 0, juros = 0;

    printf("prazo: ");
    scanf("%d", &prazo);

    printf("capital: ");
    scanf("%lf", &capital);

    printf("juros: ");
    scanf("%lf", &juros);

    double capitalizado = capital * powf((1 + juros), prazo);

    printf("valor capitalizado: %lf\n", capitalizado);

    return 0;
}
