#include <stdio.h>

int main() {
    double renda, preco;

    printf("Renda: ");
    scanf("%lf", &renda);


    printf("Preço: ");
    scanf("%lf", &preco);

   double demanda = renda / preco;

   printf("Demanda: %lf\n", demanda);

    return 0;
}
