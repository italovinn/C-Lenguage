#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, d;

    printf("Digite o primeiro ponto cartesiano\n");
    printf("x: ");
    scanf("%f", &x1);
    printf("y: ");
    scanf("%f", &y1);

    printf("\nDigite o segundo ponto cartesiano\n");
    printf("x: ");
    scanf("%f", &x2);
    printf("y: ");
    scanf("%f", &y2);

    d= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A Distancia Euclidiana e: %f", d);

    return 0;
}
