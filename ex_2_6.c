/*
6. leia um texto e informe se ele é o nome da capital de um estado da região sul do Brasil.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *capitais[3] = {"porto alegre", "florianópolis", "curitiba"};

int main() {
    char cidade[256] = {0};

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade) / sizeof(cidade[0]), stdin);

    // Quando o usuário aperta Enter uma quebra de linha é adicionada, não queremos isso
    cidade[strlen(cidade)-1] = '\0';

    int i = 0;
    for(int i = 0; cidade[i]; i++){
        cidade[i] = tolower(cidade[i]);
    }

    
    for (i = 0; capitais[i]; i++) {
        if (strcmp(cidade, capitais[i]) == 0){
            printf("A cidade "),
            fputs(cidade, stdout);
            printf(" é uma capital da região Sul\n");
            // quebra o loop e dá return cedo
            return 0;
        }
    }

    printf("A cidade "),
    fputs(cidade, stdout);
    printf(" não é uma capital da região Sul\n");

    return 0;
}