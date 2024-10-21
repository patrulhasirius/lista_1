/*
2. determine a raiz quadrada de um n´umero dado pelo usu´ario, sabendo que o algoritmo de
para o c´alculo da raiz quadrada do n´umero a ´e dado pela sequˆencia
*/

#include <stdio.h>
#include <sys/types.h>
int main() {
    u_int numero = 0;
    double resultado = 10;

    printf("Número: ");
    scanf("%u", &numero);

    u_int  i = 0;
    for(i = 0; i <= 100000; i++) {
        double interm = (resultado + numero / resultado) / 2;
        if (interm == resultado) {break;};
        resultado = interm;
    }

    printf("Resultado: %lf\n", resultado);

    return 0;
}
