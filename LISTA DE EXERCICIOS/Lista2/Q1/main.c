#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n1, n2, n3, maior, menor, meiuca, aux;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("Digite outro numero: ");
    scanf("%f", &n3);

    if(n1<n2){
        maior=n2;
        menor=n1;
    }else{
        menor=n2;
        maior=n1;
    }

    if(maior<n3){
        meiuca=maior;
        maior=n3;
    }else{
        meiuca=n3;
    }

    if(menor>meiuca){
        aux=meiuca;
        meiuca=menor;
        menor=aux;
    }

    printf("O maior numero e: %1.2f\n", maior);
    printf("O numero no meio e: %1.2f\n", meiuca);
    printf("O menor numero e: %1.2f\n", menor);

    return 0;
}
