#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float n1, n2, r;

    printf("Selecione a opera��o matem�tica:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
    printf("5. M�dulo\n");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 5) {
        printf("Op��o inv�lida.\n");
        return 1;
    }

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);

    switch (opcao) {
        case 1:
            r = n1 + n2;
            printf("Resultado da soma: %.2f\n", r);
            break;
        case 2:
            r = n1 - n2;
            printf("Resultado da subtra��o: %.2f\n", r);
            break;
        case 3:
            r = n1 * n2;
            printf("Resultado da multiplica��o: %.2f\n", r);
            break;
        case 4:
            if (n2 != 0) {
                r = n1 / n2;
                printf("Resultado da divis�o: %.2f\n", r);
            } else {
                printf("Imposs�vel dividir por zero.\n");
            }
            break;
        case 5:
            r = (int)n1 % (int)n2;
            printf("Resultado do m�dulo: %.0f\n", r);
            break;
    }

    return 0;

}
