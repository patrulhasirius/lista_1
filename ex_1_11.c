/*
11. calcule a média aritmética de quatro números fornecidos pelo usuário.
*/
#include <stdio.h>

int main() {
    // array para não ter que criar 4 variáveis
    float numeros[4] = {0};

    // essas 4 operações poderiam ser um loop
    printf("primeiro: ");
    scanf("%lf", &numeros[0]);

    printf("segundo: ");
    scanf("%lf", &numeros[1]);

    printf("primeiro: ");
    scanf("%lf", &numeros[2]);

    printf("primeiro: ");
    scanf("%lf", &numeros[3]);

    float media = ( numeros[0] + numeros[1] + numeros[2] + numeros[3]) /4;

    printf("Resultado: %lf\n", media);

    return 0;
}
