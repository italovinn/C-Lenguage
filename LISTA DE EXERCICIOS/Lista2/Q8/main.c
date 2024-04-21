#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, gravidade, velocidade;

    printf("Digite o tempo de queda em milissegundos: ");
    scanf("%f", &tempo);

    char planeta;
    printf("Digite o caractere indicativo do planeta (T-Terra, V-Vênus, M-Mercúrio): ");
    scanf(" %c", &planeta);

    switch (planeta) {
        case 'T':
            gravidade = 9.807;
            break;
        case 'V':
            gravidade = 8.87;
            break;
        case 'M':
            gravidade = 3.7;
            break;
        default:
            printf("Planeta não reconhecido!\n");
            return 1;
    }

    if (tempo <= 0) {
        printf("O tempo informado deve ser maior que zero.\n");
        return 1;
    }

    velocidade = gravidade * tempo / 1000;

    printf("A velocidade de queda do corpo é: %.2f m/s\n", velocidade);

    return 0;
}
