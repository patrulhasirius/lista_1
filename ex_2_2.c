/*
2. leia um número e imprima na tela a mensagem ”O número é par.”se o número lido for
par e ”O número é impar” se o número lido for ímpar. Em caso de número não inteiros
ou negativos, imprima na tela ”Este número não ´e válido.”
*/

#include <math.h>
#include <stdio.h>

int main() {
    double numero = 0;

    printf("Número: ");
    scanf("%lf", &numero);

    if (floor(numero) != numero | numero < 0) {
        printf("Este número não é válido.\n");
    } else if ((int)numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }
}
