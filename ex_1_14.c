/*
14. calcule a distância entre dois pontos de coordenadas, respectivamente, (x1, x2) e (x1, x2).
Tais coordenadas devem ser lidas do teclado. Use a fórmula da distância euclideana entre
dois pontos.
*/

#include <math.h>
#include <stdio.h>

typedef struct {
    float x;
    float y;
} Ponto;

int main() {
    Ponto ponto_1 = {0}, ponto_2 = {0};   

    // essas 4 operações poderiam ser um loop
    printf("Ponto 1 x: ");
    scanf("%lf", &ponto_1.x);

    printf("Ponto 1 y: ");
    scanf("%lf", &ponto_1.y);

    printf("Ponto 2 x: ");
    scanf("%lf", &ponto_2.x);

    printf("Ponto 2 y: ");
    scanf("%lf", &ponto_2.y);

    float distancia = sqrt(pow(ponto_1.x - ponto_2.x, 2) + pow(ponto_1.y - ponto_2.y, 2));

    printf("Distância: %lf\n", distancia);

    return 0;
}
