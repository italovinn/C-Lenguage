#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Linha_onibus, dia_semana;

    printf("Digite o número da linha do ônibus: ");
    scanf("%d", &Linha_onibus);

    printf("Digite o dia da semana (1 - domingo, 2 - segunda, ... 7 - sábado): ");
    scanf("%d", &dia_semana);

    if (dia_semana == 1) { // domingo
        printf("As linhas não operam neste dia.\n");
    }
    else if (dia_semana == 2) { // segunda
        switch (Linha_onibus) {
            case 1:
                printf("O ônibus da linha 1 sai às 9:20 e às 15:20.\n");
                break;
            case 2:
                printf("O ônibus da linha 2 sai às 7:30 e às 18:10.\n");
                break;
            case 3:
                printf("O ônibus da linha 3 sai às 12:30 e às 14:40.\n");
                break;
            case 4:
                printf("O ônibus da linha 4 sai às 7:20 e às 13:20.\n");
                break;
            default:
                printf("Linha de ônibus inválida.\n");
                break;
        }
    }
    else if (dia_semana >= 3 && dia_semana <= 6) { // terça a sexta
        printf("Digite o número da linha do ônibus: ");
        scanf("%d", &Linha_onibus);
        switch (Linha_onibus) {
            case 1:
                printf("O ônibus da linha 1 sai às 9:20 e às 15:20.\n");
                break;
            case 2:
                printf("O ônibus da linha 2 sai às 7:30 e às 18:10.\n");
                break;
            case 3:
                printf("O ônibus da linha 3 sai às 12:30 e às 14:40.\n");
                break;
            case 4:
                if (dia_semana == 3 || dia_semana == 4) { // terça ou quarta
                    printf("O ônibus da linha 4 sai às 7:20 e às 13:20.\n");
                }
                else if (dia_semana == 5 || dia_semana == 6) { // quinta ou sexta
                    printf("O ônibus da linha 4 sai às 9:45 e às 22:20.\n");
                }
                break;
            default:
                printf("Linha de ônibus inválida.\n");
                break;
        }
    }
    else if (dia_semana == 7) { // sábado
        printf("Digite o número da linha do ônibus: ");
        scanf("%d", &Linha_onibus);
        switch (Linha_onibus) {
            case 1:
                printf("A linha 1 sai às 10:30.\n");
                break;
            case 2:
                printf("A linha 2 sai às 7:30.\n");
                break;
            case 3:
                printf("A linha 3 sai às 12:30.\n");
                break;
            case 4:
                printf("A linha 4 não opera neste dia.\n");
                break;
            default:
                printf("Linha de ônibus inválida.\n");
                break;
        }
    }
    else {
        printf("Dia da semana inválido.\n");
    }

    return 0;
}
