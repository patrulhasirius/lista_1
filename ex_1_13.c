/*
13. dados a renda do consumidor e o pre¸o de um bem, calcule a quantidade de demandada
deste bem, sabendo que sua função de demanda é dada por q = renda/preco.
*/

#include <stdio.h>

int main() {
    double renda = 0, preco = 0;

    printf("Renda: ");
    scanf("%lf", &renda);


    printf("Preço: ");
    scanf("%lf", &preco);

   double demanda = renda / preco;

   printf("Demanda: %lf\n", demanda);

    return 0;
}
