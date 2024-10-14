#include <stdio.h>
#include <string.h>


int main() {
    char nome[256];
    printf("Qual é o seu nome?\n");

    fgets(nome, 256, stdin);

    nome[strlen(nome)-1] = '\0';
    printf("Oi, ");
    puts(nome);


    return 0;
}
