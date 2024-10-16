#include <stdio.h>

int main() {
    int numero;

    printf("Número: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("Este número é múltiplo de 3\n");
    } else {
        printf("Este número não é múltiplo de 3\n");
    }
}
