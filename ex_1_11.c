/*
11. calcule a média aritmética de quatro números fornecidos pelo usuário.
*/
#include <stdio.h>

int main() {
    // array para não ter que criar 4 variáveis
    float numeros[4] = {0};

    // essas 4 operações poderiam ser um loop
    printf("primeiro: ");
    scanf("%f", &numeros[0]);

    printf("segundo: ");
    scanf("%f", &numeros[1]);

    printf("primeiro: ");
    scanf("%f", &numeros[2]);

    printf("primeiro: ");
    scanf("%f", &numeros[3]);

    float media = ( numeros[0] + numeros[1] + numeros[2] + numeros[3]) /4;

    printf("Resultado: %f\n", media);

    return 0;
}
