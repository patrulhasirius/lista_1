/*
4. leia o nome e a idade de uma pessoa. Se a pessoa tiver menos de 18 anos, imprimir
”[nome] não pode assistir a este filme.” Onde no lugar de [nome] deve sair o nome lido do
teclado.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[256] = {0};
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    int idade;
    printf("Idade: ");
    scanf("%d", &idade);

    nome[strlen(nome)-1] = '\0';
    if (idade < 18) {
        fputs(nome, stdout);
        printf(" não pode assistir o filme\n");
    }

    return 0;
}
