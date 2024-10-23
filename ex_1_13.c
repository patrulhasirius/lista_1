/*
13. dados a renda do consumidor e o pre¸o de um bem, calcule a quantidade de demandada
deste bem, sabendo que sua função de demanda é dada por q = renda/preco.
*/

#include <stdio.h>

int main() {
    float renda = 0, preco = 0;

    printf("Renda: ");
    scanf("%f", &renda);


    printf("Preço: ");
    scanf("%f", &preco);

   float demanda = renda / preco;

   printf("Demanda: %f\n", demanda);

    return 0;
}
