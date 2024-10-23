/*
7. refaça o exercício anterior para a progressão geométrica.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int enesimo = 0;
    float razao = 0, primeiro = 0;

    printf("enésimo número: ");
    scanf("%d", &enesimo);

    printf("primeiro número: ");
    scanf("%f", &primeiro);

    printf("razão: ");
    scanf("%f", &razao);

    float final = primeiro * pow(razao, (float)enesimo - 1);

    float soma = primeiro * (pow(razao, (float)enesimo) -1) / (razao - 1) ;

    printf("Número final: %f\n", final);
    printf("soma: %f\n", soma);

    return 0;
}
