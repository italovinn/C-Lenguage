#include<stdio.h>
#include<stdlib.h>

int main() {
    float n1, n2, n3, n4, n5;
    float maior, menor, at;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro n�mero: ");
    scanf("%f", &n3);
    printf("Digite o quarto n�mero: ");
    scanf("%f", &n4);
    printf("Digite o quinto n�mero: ");
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

    printf("A amplitude total da s�rie de n�meros �: %.2f\n", at);

    return 0;
}
