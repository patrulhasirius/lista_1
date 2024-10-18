/*
9. leia o peso e a altura de uma pessoa, calcule seu índice de massa corporal (IMC), classifique
essa pessoa de acordo com a tabela abaixo e escreva na tela a condição da pessoa:
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    double peso;
    double altura;
    double imc;
} Pessoa;


int main() {
    Pessoa pessoa = {0};

    printf("Peso (em kg): ");
    scanf("%lf", &pessoa.peso);

    printf("Altura (em m): ");
    scanf("%lf", &pessoa.altura);

    pessoa.imc = pessoa.peso / (pessoa.altura * pessoa.altura);

    char condicao[64] = {0};

    if (pessoa.imc <= 18.5) {
        strcat(condicao, "excessivamente magro");
    } else if (pessoa.imc > 18.5 & pessoa.imc <= 25) {
        strcat(condicao, "peso normal");
    } else if (pessoa.imc > 25 & pessoa.imc <= 30) {
        strcat(condicao, "sobrepeso");
    } else {
        strcat(condicao, "obeso");
    }

    printf("O IMC é %.2lf e a condição é ", pessoa.imc);
    fputs(condicao, stdout);
    printf("\n");

    return 0;
}
