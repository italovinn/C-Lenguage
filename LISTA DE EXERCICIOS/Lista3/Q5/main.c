#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, reverso = 0, digito, original;

    printf("Digite um número: ");
    scanf("%d", &numero);

    original = numero;

    while (numero != 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    if (original == reverso) {
        printf("%d é um palíndromo.\n", original);
    } else {
        printf("%d não é um palíndromo.\n", original);
    }

    return 0;
}
