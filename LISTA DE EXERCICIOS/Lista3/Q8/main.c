#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int count = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int temp = numero;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    printf("O número inserido tem: %d dígitos\n", count);

    return 0;
}
