#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, reverso = 0, digito, original;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    original = numero;

    while (numero != 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    if (original == reverso) {
        printf("%d � um pal�ndromo.\n", original);
    } else {
        printf("%d n�o � um pal�ndromo.\n", original);
    }

    return 0;
}
