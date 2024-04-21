#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float n1, n2, r;

    printf("Selecione a operação matemática:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Módulo\n");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 5) {
        printf("Opção inválida.\n");
        return 1;
    }

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    switch (opcao) {
        case 1:
            r = n1 + n2;
            printf("Resultado da soma: %.2f\n", r);
            break;
        case 2:
            r = n1 - n2;
            printf("Resultado da subtração: %.2f\n", r);
            break;
        case 3:
            r = n1 * n2;
            printf("Resultado da multiplicação: %.2f\n", r);
            break;
        case 4:
            if (n2 != 0) {
                r = n1 / n2;
                printf("Resultado da divisão: %.2f\n", r);
            } else {
                printf("Impossível dividir por zero.\n");
            }
            break;
        case 5:
            r = (int)n1 % (int)n2;
            printf("Resultado do módulo: %.0f\n", r);
            break;
    }

    return 0;

}
