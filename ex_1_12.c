/*
12. calcule a área de um círculo e o comprimento de sua circunferência cujo raio será informado
pelo usuário.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float raio = 0;

    printf("raio: ");
    scanf("%lf", &raio);

    // o math.h define PI
    float area = M_PI * raio * raio;
    float perimetro  = 2 * M_PI * raio;

    printf("área: %lf\n", area);
    printf("perímetro: %lf\n", perimetro);

    return 0;
}
