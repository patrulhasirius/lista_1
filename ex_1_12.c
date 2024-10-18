/*
12. calcule a área de um círculo e o comprimento de sua circunferência cujo raio será informado
pelo usuário.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double raio = 0;

    printf("raio: ");
    scanf("%lf", &raio);

    double area = M_PI * raio * raio;
    double perimetro  = 2 * M_PI * raio;

    printf("área: %lf\n", area);
    printf("perímetro: %lf\n", perimetro);

    return 0;
}
