#include <stdio.h>
#include <math.h>

int main()
{
    int w, x, y, z;
    float media;

    printf("Digite quatro n�meros inteiros positivos (w, x, y, z): ");
    scanf("%d %d %d %d", &w, &x, &y, &z);

    if (w <= 0 || x <= 0 || y <= 0 || z <= 0) {
        printf("Valores inv�lidos!\n");
        return 1;
    }

    switch (w) {
        case 1:
            media = sqrt(x * y * z);
            break;
        case 2:
            media = (x + 2 * y + 3 * z) / 6.0;
            break;
        case 3:
            media = 3 / ((1 / (float)x) + (1 / (float)y) + (1 / (float)z));
            break;
        case 4:
            media = (x + y + z) / 3.0;
            break;
        default:
            printf("Valor de w inv�lido!\n");
            return 1;
    }

    printf("Resultado da m�dia calculada: %.2f\n", media);

    return 0;
}
