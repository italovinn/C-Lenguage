#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao possui uma raiz real: %.2f\n", x1);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}
