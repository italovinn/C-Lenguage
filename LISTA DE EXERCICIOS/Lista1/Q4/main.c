#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, IMC;

    printf("Digite sua altura em CM: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    IMC= 10000*(peso/pow(altura, 2)); //multipliquei por 10000 para que o numero 0,000xyz se torne xy.z ;D

    printf("Seu IMC e igual a: %.1f", IMC);
    printf("\n\n\n\n||Italo Vinhas Antunes Silva||\n");

    return 0;
}
