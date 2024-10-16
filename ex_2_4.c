#include <stdio.h>
#include <string.h>

int main() {
    char nome[256];
    printf("Nome: ");
    fgets(nome, 256, stdin);

    int idade;
    printf("Idade: ");
    scanf("%d", &idade);

    nome[strlen(nome)-1] = '\0';
    if (idade < 18) {
        fputs(nome, stdout);
        printf(" não pode assistir o filme\n");
    }
}
