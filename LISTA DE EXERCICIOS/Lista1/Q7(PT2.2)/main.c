#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, semanas, ano, d, aux;

    printf("Digite um numero de dias especifico apartir de 365 dias: ");
    scanf("%d", &dias);

    ano= dias/365;
    semanas= (dias%365) / 7;
    d= (dias%365) % 7;

    printf("%d dias corresponde a %d ano(s) %d semana(s) %d dia(s)", dias, ano, semanas, d);

    return 0;
}
