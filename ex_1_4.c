#include <stdio.h>

int main() {
    char nome[256];
    printf("Qual é o seu nome?");

    scanf("%s", nome);

    printf("Oi, %s", nome);

    return 0;
}