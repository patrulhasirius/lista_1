#include <stdio.h>

int main() {
    double retorno_sem_risco, retorno_mercado, beta;

    printf("Retorno do ativo sem risco: ");
    scanf("%lf", &retorno_sem_risco);

    printf("Retorno da carteira de mercado: ");
    scanf("%lf", &retorno_mercado);

    printf("Coeficiente de sensibilidade do retorno\ndo ativo a variacõoes no prêmio\nde risco de mercado: ");
    scanf("%lf", &beta);

    double retorno_esperado = retorno_sem_risco + beta * (retorno_mercado - retorno_sem_risco);

    printf("retorno esperado: %lf\n", retorno_esperado);

    return 0;
}
