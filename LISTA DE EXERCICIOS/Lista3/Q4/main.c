#include <stdio.h>
#include <stdlib.h>

int main() {
    float produto, final;
    int quantidade;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    // Limpar o buffer de entrada
    while (getchar() != '\n');

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &quantidade);

    final = produto * quantidade;

    printf("O valor final é: %.2f\n", final);

    return 0;
}
