#include <stdio.h>

int main() {
    int first_num;
    int sec_num;

    printf("Escreva o primeiro número inteiro\n");
    scanf("%d", &first_num);
    printf("Escreva o segundo número inteiro\n");
    scanf("%d", &sec_num);
    printf("o resultado é: %d", first_num + sec_num);

    return 0;
}