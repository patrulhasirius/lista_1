/*
5. imprima na tela os 10 primeiros termos de uma progressão aritmética cuja razão é dada
pelo usuário.
*/

#include <stdio.h>

const int n = 10;
int main() {
    float init = 0, razao = 0;
    printf("Razão: ");
    scanf("%lf", &razao);

    for ( int i = 0; i < n; i++) {
        printf("%lf\n", init);
        init += razao;        
    }
    

    return 0;
}