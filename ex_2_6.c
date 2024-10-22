/*
6. leia um texto e informe se ele é o nome da capital de um estado da região sul do Brasil.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char *buffer;
    size_t size;
} Array;

const char *capitais[3] = {"porto alegre", "florianópolis", "curitiba"};

int main() {
    // O C não guarda o tamanho do array, esse struct simplesmente compõe o buffer com o tamanho por conveniência
    char buffer[256] = {0};
    Array cidade = {
        buffer,
        sizeof(buffer),
    };

    printf("Cidade: ");
    fgets(cidade.buffer, cidade.size * sizeof(cidade.buffer[0]) , stdin);

    // Quando o usuário aperta Enter uma quebra de linha é adicionada, não queremos isso
    cidade.buffer[strlen(cidade.buffer)-1] = '\0';

    int i = 0;
    for(int i = 0; cidade.buffer[i]; i++){
        cidade.buffer[i] = tolower(cidade.buffer[i]);
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
