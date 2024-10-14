#include <math.h>
#include <stdio.h>

int main() {
    int prazo;
    double capital, juros;

    printf("prazo: ");
    scanf("%d", &prazo);

    printf("capital: ");
    scanf("%lf", &capital);

    printf("juros: ");
    scanf("%lf", &juros);

    double capitalizado = capital * pow((1 + juros), prazo);

    printf("valor capitalizado: %lf\n", capitalizado);

    return 0;
}
