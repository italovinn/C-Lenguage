#include<stdio.h>
#include<stdlib.h>

int main() {
    float n1, n2, n3, n4, n5;
    float maior, menor, at;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);
    printf("Digite o quarto número: ");
    scanf("%f", &n4);
    printf("Digite o quinto número: ");
    scanf("%f", &n5);

    maior=n1;
    menor=n1;

    if(n2>maior){
        maior=n2;
    } else if(n2<menor){
        menor=n2;
    }

    if(n3>maior){
        maior=n3;
    } else if(n3<menor){
        menor=n3;
    }

    if(n4>maior){
        maior=n4;
    } else if(n4<menor){
        menor=n4;
    }

    if(n5>maior){
        maior=n5;
    } else if(n5<menor){
        menor=n5;
    }

    at=maior-menor;

    printf("A amplitude total da série de números é: %.2f\n", at);

    return 0;
}
