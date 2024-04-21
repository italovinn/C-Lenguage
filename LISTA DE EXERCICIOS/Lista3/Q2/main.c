#include <stdio.h>
#include <stdlib.h>

int main()
{
 int passageiros = 0, entraram, sairam, paradas;

    printf("Digite o número de paradas: ");
    scanf("%d", &paradas);

    for (int i = 1; i <= paradas; i++) {
        printf("Informe o número de passageiros que entraram na parada %d: ", i);
        scanf("%d", &entraram);
        printf("Informe o número de passageiros que saíram na parada %d: ", i);
        scanf("%d", &sairam);
        passageiros = passageiros + entraram - sairam;
    }

    printf("Número de passageiros no ônibus: %d\n", passageiros);

    return 0;
}
