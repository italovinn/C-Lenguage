#include <stdio.h>
#include <stdlib.h>

int main()
{
    int combustivel_abastecido, distancia, consumo;

    printf("Digite a quantidade de combust�vel abastecido: ");
    scanf("%d", &combustivel_abastecido);
    printf("Digite a dist�ncia percorrida: ");
    scanf("%d", &distancia);
    consumo = distancia / combustivel_abastecido;
    printf("O consumo m�dio � de %d km/l\n", consumo);

    return 0;
}
