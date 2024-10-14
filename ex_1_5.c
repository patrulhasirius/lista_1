#include <stdio.h>
const int POR_HORA_CENT = 4000;
int main() {
    int horas;

    printf("Número de horas trabalhadas: ");
    scanf("%d", &horas);

    int salario_bruto = POR_HORA_CENT * horas;
    int deducao = 0.3 * salario_bruto;
    int salario_liquido = salario_bruto - deducao;

    printf("Salário bruto: %d,%02d\n", salario_bruto / 100, salario_bruto % 100);
    printf("Dedução: %d,%02d\n", deducao/ 100, deducao % 100);
    printf("Salário líquido: %d,%02d\n", salario_liquido / 100, salario_liquido % 100);

    return 0;
}
