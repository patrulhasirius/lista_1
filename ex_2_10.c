/*
10. dado o número de horas trabalhadas por um empregado de uma empresa que paga R$
20,00 por hora trabalhada e desconta imposto de renda (ir) segundo a tabela abaixo,
determine o salário líquido do empregado.
*/

#include <stdio.h>

float calc_desconto(float bruto) {
    float desconto = 0;
    if (bruto > 5000) {
        desconto += (bruto - 5000) * 0.35;
        bruto = 5000;
    };
    if (bruto > 2500) {
        desconto += (bruto - 2500) * 0.20;
        bruto = 2500;
    }
    if (bruto > 1000) {
        desconto += (bruto - 1000) * 0.10;
        bruto = 1000;
    }

    return desconto;
}

int main() {
    float horas = 0;

    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &horas);

    float salario_bruto = 20 * horas;

    float salario_liquido = salario_bruto - calc_desconto(salario_bruto);


    printf("O salário líquido é: %.2f\n", salario_liquido);

    return 0;
}
