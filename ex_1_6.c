/*
6. determine o n-ésimo termo e a soma dos termos de uma progressão aritmética onde n,
primeiro termo e a razão são dados pelo usuário.
*/

#include <stdio.h>

int main() {
    int enesimo = 0;
    float razao = 0, primeiro = 0;

    printf("enésimo número: ");
    scanf("%d", &enesimo);

    printf("primeiro número: ");
    scanf("%lf", &primeiro);

    printf("razão: ");
    scanf("%lf", &razao);

    // o cast é pra garantir que o compilador não converta tudo para int
    float final = primeiro + (float)enesimo * razao;

    float soma = ((float)enesimo + 1) * ((primeiro + final) / 2);

    printf("Número final: %lf\n", final);
    printf("soma: %lf\n", soma);

    return 0;
}
