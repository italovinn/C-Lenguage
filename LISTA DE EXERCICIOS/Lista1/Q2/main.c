#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, soma, media, produto;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a sua terceira nota: ");
    scanf("%f", &n3);

    soma= n1 + n2 + n3;
    media= soma/3;
    produto= n1 * n2 * n3;

    printf("A soma das suas notas e: %0.f\n", soma);
    printf("A media das suas notas e: %0.f\n", media);
    printf("O produto das suas notas e: %0.f\n", produto);
    printf("\n\n\n\n||Italo Vinhas Antunes Silva||\n");

    return 0;
}
