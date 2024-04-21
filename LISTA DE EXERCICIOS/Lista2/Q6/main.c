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
        printf("Valor inválido\n");
        return 0;
    }

    if (C % A == 0 && C % B == 0) {
        printf("Divisível por ambos\n");
    } else if (C % A == 0 || C % B == 0) {
        printf("Divisível por um\n");
    } else {
        printf("Não é divisível\n");
    }

    return 0;
}

