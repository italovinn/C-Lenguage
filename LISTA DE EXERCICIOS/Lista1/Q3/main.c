#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, troca;

    printf("Digite um numero: ");
    scanf("%f", &A);
    printf("Digite outro numero: ");
    scanf("%f", &B);

    troca= A;
    A= B;
    B= troca;

    printf("O valor do primeiro numero ficou: %.2f \nE o segundo numero ficou: %.2f", A, B);
    printf("\n\n\n\n||Italo Vinhas Antunes Silva||\n");

    return 0;
}
