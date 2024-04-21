#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Linha_onibus, dia_semana;

    printf("Digite o n�mero da linha do �nibus: ");
    scanf("%d", &Linha_onibus);

    printf("Digite o dia da semana (1 - domingo, 2 - segunda, ... 7 - s�bado): ");
    scanf("%d", &dia_semana);

    if (dia_semana == 1) { // domingo
        printf("As linhas n�o operam neste dia.\n");
    }
    else if (dia_semana == 2) { // segunda
        switch (Linha_onibus) {
            case 1:
                printf("O �nibus da linha 1 sai �s 9:20 e �s 15:20.\n");
                break;
            case 2:
                printf("O �nibus da linha 2 sai �s 7:30 e �s 18:10.\n");
                break;
            case 3:
                printf("O �nibus da linha 3 sai �s 12:30 e �s 14:40.\n");
                break;
            case 4:
                printf("O �nibus da linha 4 sai �s 7:20 e �s 13:20.\n");
                break;
            default:
                printf("Linha de �nibus inv�lida.\n");
                break;
        }
    }
    else if (dia_semana >= 3 && dia_semana <= 6) { // ter�a a sexta
        printf("Digite o n�mero da linha do �nibus: ");
        scanf("%d", &Linha_onibus);
        switch (Linha_onibus) {
            case 1:
                printf("O �nibus da linha 1 sai �s 9:20 e �s 15:20.\n");
                break;
            case 2:
                printf("O �nibus da linha 2 sai �s 7:30 e �s 18:10.\n");
                break;
            case 3:
                printf("O �nibus da linha 3 sai �s 12:30 e �s 14:40.\n");
                break;
            case 4:
                if (dia_semana == 3 || dia_semana == 4) { // ter�a ou quarta
                    printf("O �nibus da linha 4 sai �s 7:20 e �s 13:20.\n");
                }
                else if (dia_semana == 5 || dia_semana == 6) { // quinta ou sexta
                    printf("O �nibus da linha 4 sai �s 9:45 e �s 22:20.\n");
                }
                break;
            default:
                printf("Linha de �nibus inv�lida.\n");
                break;
        }
    }
    else if (dia_semana == 7) { // s�bado
        printf("Digite o n�mero da linha do �nibus: ");
        scanf("%d", &Linha_onibus);
        switch (Linha_onibus) {
            case 1:
                printf("A linha 1 sai �s 10:30.\n");
                break;
            case 2:
                printf("A linha 2 sai �s 7:30.\n");
                break;
            case 3:
                printf("A linha 3 sai �s 12:30.\n");
                break;
            case 4:
                printf("A linha 4 n�o opera neste dia.\n");
                break;
            default:
                printf("Linha de �nibus inv�lida.\n");
                break;
        }
    }
    else {
        printf("Dia da semana inv�lido.\n");
    }

    return 0;
}
