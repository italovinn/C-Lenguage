#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A <= 0 || B <= 0) {
        printf("Valor inv�lido\n");
        return 0;
    }

    if (C % A == 0 && C % B == 0) {
        printf("Divis�vel por ambos\n");
    } else if (C % A == 0 || C % B == 0) {
        printf("Divis�vel por um\n");
    } else {
        printf("N�o � divis�vel\n");
    }

    return 0;
}

