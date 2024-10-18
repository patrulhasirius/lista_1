/*
12. calcule a área de um círculo e o comprimento de sua circunferência cujo raio será informado
pelo usuário.
*/

#include <stdio.h>
double const PI = 3.14159265358979323846;

int main() {
    double raio = 0;

    printf("raio: ");
    scanf("%lf", &raio);

    double area = PI * raio * raio;
    double perimetro  = 2 * PI * raio;

    printf("área: %lf\n", area);
    printf("perímetro: %lf\n", perimetro);

    return 0;
}
