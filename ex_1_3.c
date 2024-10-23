/*
3. leia dois números do teclado, calcule a sua soma e imprima na tela seu resultado.
*/

#include <stdio.h>

int main() {
    float first_num = 0;
    float sec_num = 0;

    printf("Escreva o primeiro número: ");
    scanf("%f", &first_num);
    printf("Escreva o segundo número: ");
    scanf("%f", &sec_num);
    
    printf("o resultado é: %f\n", first_num + sec_num);

    return 0;
}