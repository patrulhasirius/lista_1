/*
7. refaça o exercício anterior para a progressão geométrica.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int enesimo;
    double razao, primeiro;

    printf("enésimo número: ");
    scanf("%d", &enesimo);

    printf("primeiro número: ");
    scanf("%lf", &primeiro);

    printf("razão: ");
    scanf("%lf", &razao);

    double final = primeiro * pow(razao, (double)enesimo);

    double soma = primeiro * (pow(razao, (double)enesimo + 1) -1) / (razao - 1) ;

    printf("Número final: %lf\n", final);
    printf("soma: %lf\n", soma);

    return 0;
}
