#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int count = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    int temp = numero;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    printf("O n�mero inserido tem: %d d�gitos\n", count);

    return 0;
}
