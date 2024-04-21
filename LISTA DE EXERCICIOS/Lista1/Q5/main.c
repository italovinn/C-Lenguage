#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel, fah;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fah);

    cel= (fah - 32) * 5/9;

    printf("Em Graus Celcius esta: %0.f", cel);

    return 0;
}
