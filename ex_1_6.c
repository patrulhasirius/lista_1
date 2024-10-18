/*
6. determine o n-ésimo termo e a soma dos termos de uma progressão aritmética onde n,
primeiro termo e a razão são dados pelo usuário.
*/

#include <stdio.h>

int main() {
    int enesimo;
    double razao, primeiro;

    printf("enésimo número: ");
    scanf("%d", &enesimo);

    printf("primeiro número: ");
    scanf("%lf", &primeiro);

    printf("razão: ");
    scanf("%lf", &razao);

    double final = primeiro + (double)enesimo * razao;

    double soma = ((double)enesimo + 1) * ((primeiro + final) / 2);

    printf("Número final: %lf\n", final);
    printf("soma: %lf\n", soma);

    return 0;
}
