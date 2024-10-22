/*
5. imprima na tela os 10 primeiros termos de uma progressão aritmética cuja razão é dada
pelo usuário.
*/

#include <stdio.h>
#include <sys/types.h>

const u_int n = 10;
int main() {
    double init = 0, razao = 0;
    printf("Razão: ");
    scanf("%lf", &razao);

    for ( u_int i = 0; i < n; i++) {
        printf("%lf\n", init);
        init += razao;        
    }
    

    return 0;
}