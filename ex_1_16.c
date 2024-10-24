/*
16. calcule o retorno esperado de um ativo, dado que o usuário informa o retorno do ativo
sem risco (Rf), o retorno da carteira de mercado (Rm) e o coeficiente de sensibilidade
do retorno do ativo a varia¸cões no prêmio de risco de mercado (βi). Considere que a
fórmula para calcular o retorno esperado de um ativo qualquer é dada por E(Ri) = Rf + βi.E [Rm − Rf ]
*/

#include <stdio.h>

int main() {
    float retorno_sem_risco = 0, retorno_mercado = 0, beta = 0;

    printf("Retorno do ativo sem risco: ");
    scanf("%f", &retorno_sem_risco);

    printf("Retorno da carteira de mercado: ");
    scanf("%f", &retorno_mercado);

    printf("Coeficiente de sensibilidade do retorno\ndo ativo a variacõoes no prêmio\nde risco de mercado: ");
    scanf("%f", &beta);

    float retorno_esperado = retorno_sem_risco + beta * (retorno_mercado - retorno_sem_risco);

    printf("retorno esperado: %f\n", retorno_esperado);

    return 0;
}
