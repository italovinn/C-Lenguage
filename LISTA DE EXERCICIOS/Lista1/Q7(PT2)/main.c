#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n1invertido=0, n2, n2invertido=0, n3, n3invertido=0;

    printf("Digite um numero que contem 3 digitos: ");
    scanf("%d", &n1);
    printf("Digite outro numero que contem 3 digitos: ");
    scanf("%d", &n2);
    printf("Digite outro numero que contem 3 digitos: ");
    scanf("%d", &n3);


    for(int i=1; i < 4; i++){
        n1invertido = n1invertido * 10 + n1 % 10;
        n1/=10;
        n2invertido = n2invertido * 10 + n2 % 10;
        n2/=10;
        n3invertido = n3invertido * 10 + n3 % 10;
        n3/=10;
    }

    printf("Os numeros invertidos ficam: %d, %d, %d", n1invertido, n2invertido, n3invertido);

    return 0;
}
