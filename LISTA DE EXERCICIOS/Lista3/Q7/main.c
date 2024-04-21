#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++) {
        printf("%d ", i);
    }

    return 0;
}
