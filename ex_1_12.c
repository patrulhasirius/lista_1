#include <stdio.h>
double const PI = 3.14159265358979323846;

int main() {
    double raio;

    printf("raio: ");
    scanf("%lf", &raio);

    double area = PI * raio * raio;
    double perimetro  = 2 * PI * raio;

    printf("área: %lf\n", area);
    printf("perímetro: %lf\n", perimetro);

    return 0;
}