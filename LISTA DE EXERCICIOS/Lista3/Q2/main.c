#include <stdio.h>
#include <stdlib.h>

int main()
{
 int passageiros = 0, entraram, sairam, paradas;

    printf("Digite o n�mero de paradas: ");
    scanf("%d", &paradas);

    for (int i = 1; i <= paradas; i++) {
        printf("Informe o n�mero de passageiros que entraram na parada %d: ", i);
        scanf("%d", &entraram);
        printf("Informe o n�mero de passageiros que sa�ram na parada %d: ", i);
        scanf("%d", &sairam);
        passageiros = passageiros + entraram - sairam;
    }

    printf("N�mero de passageiros no �nibus: %d\n", passageiros);

    return 0;
}
