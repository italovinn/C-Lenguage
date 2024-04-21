#include <stdio.h>
#include <stdlib.h>

int main()
{
    int combustivel_abastecido, distancia, consumo;

    printf("Digite a quantidade de combustível abastecido: ");
    scanf("%d", &combustivel_abastecido);
    printf("Digite a distância percorrida: ");
    scanf("%d", &distancia);
    consumo = distancia / combustivel_abastecido;
    printf("O consumo médio é de %d km/l\n", consumo);

    return 0;
}
