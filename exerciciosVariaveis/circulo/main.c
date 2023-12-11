#include <stdio.h>
#include <math.h>
#define pi 3.14
int main() {
    double raio, area, perimetro;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    area = pi * pow(raio, 2);
    perimetro = 2 * pi * raio;
    printf("A area do circulo e: %.2lf\n", area);
    printf("O perimetro do circulo e: %.2lf\n", perimetro);

    return 0;
}
