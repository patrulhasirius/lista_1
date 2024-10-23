/*
2. determine a raiz quadrada de um número dado pelo usuário, sabendo que o algoritmo de
para o cálculo da raiz quadrada do número a é dado pela sequência
*/

#include <stdio.h>

int main() {
    int numero = 0;
    float resultado = 10;

    printf("Número: ");
    scanf("%u", &numero);

    int  i = 0;
    for(i = 0; i <= 100000; i++) {
        float interm = (resultado + numero / resultado) / 2;
        // quebra o loop quando chega no limite de precisão do float
        if (interm == resultado) {break;};
        resultado = interm;
    }

    printf("Resultado: %f\n", resultado);

    return 0;
}
