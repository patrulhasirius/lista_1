#include <math.h>
#include <stdio.h>

int main() {
    double ponto1_x, ponto1_y, ponto2_x, ponto2_y;

    printf("Ponto 1 x: ");
    scanf("%lf", &ponto1_x);

    printf("Ponto 1 y: ");
    scanf("%lf", &ponto1_y);

    printf("Ponto 2 x: ");
    scanf("%lf", &ponto2_x);

    printf("Ponto 2 y: ");
    scanf("%lf", &ponto2_y);

    double distancia = sqrt(pow(ponto1_x - ponto2_x, 2) + pow(ponto1_y - ponto2_y, 2));

    printf("Distância: %lf\n", distancia);
}