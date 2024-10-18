/*
3. leia um número, determine se ele é múltiplo de 3 e imprima na tela a mensagem ”Este
número é múltiplo de 3” ou ”Este número não é múltiplo de 3” a depender do caso.
*/

#include <stdio.h>

int main() {
    int numero = 0;

    printf("Número: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("Este número é múltiplo de 3\n");
    } else {
        printf("Este número não é múltiplo de 3\n");
    }
}
