/*
10. solicite o valor de um capital, o prazo de investimento, a taxa de juros, calcule e imprima
na tela o valor capitalizado.
*/

#include <math.h>
#include <stdio.h>

int main() {
    int prazo = 0;
    float capital = 0, juros = 0;

    printf("prazo: ");
    scanf("%d", &prazo);

    printf("capital: ");
    scanf("%f", &capital);

    printf("juros: ");
    scanf("%f", &juros);

    float capitalizado = capital * powf((1 + juros), prazo);

    printf("valor capitalizado: %f\n", capitalizado);

    return 0;
}
