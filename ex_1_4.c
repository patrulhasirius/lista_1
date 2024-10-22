/*
4. pergunte o nome do usuário e apresente a mensagem ”Oi,...”, seguida pelo nome do
usuário.
*/

#include <stdio.h>
#include <string.h>


int main() {
    char nome[256] = {"\0"};
    printf("Qual é o seu nome?\n");

    fgets(nome, 256, stdin);

    // Quando o usuário aperta Enter uma quebra de linha é adicionada, não queremos isso
    nome[strlen(nome)-1] = '\0';
    printf("Oi, ");
    puts(nome);


    return 0;
}
