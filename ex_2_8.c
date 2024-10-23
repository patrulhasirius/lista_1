/*
8. solicite as notas de um aluno nas avaliações previstas no plano de ensino desta disciplina,
calcule a sua média e informe se o aluno está aprovado ou reprovado com base nas notas
obtidas, incluindo a recuperação. Use este programa para avaliar seu próprio desempenho
na disciplina.
*/

#include <stdio.h>

char nota_para_conceito(float nota) {
    char conceito = {0};

    if (nota >= 9) {
        conceito = 'A';
    } else if (nota >= 7.5) {
        conceito = 'B';
    } else if(nota >= 6) {
        conceito = 'C';
    } else {
        conceito = 'D';
    }

    return conceito;
}

int main() {
    float notas[3];

    for (int i = 0; i < 3; i++) {
        printf("Nota da lista %d: ", i +1);
        scanf("%f", &notas[i]);
    }

    float media = (notas[0] + notas[1] + notas[2]) / 3;

    char conceito = nota_para_conceito(media);

    float nota_recup = 0;
    if (conceito == 'D') {
        printf("Nota da Recuperação: ");
        scanf("%f", &nota_recup);
        media = (3 * nota_recup + 2 * media) / 5;
        conceito = nota_para_conceito(media);
    }

    printf("Nota final: %.1f\n", media);
    printf("Conceito: %c\n", conceito);


    return 0;
}