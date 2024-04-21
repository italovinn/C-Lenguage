#include <stdio.h>
#include <stdlib.h>

int main()
{
  float produto, imposto, final;
  char estado;

  printf("Digite o valor do produto: ");
  scanf("%f", &produto);
  printf("Digite o estado de destino (MG, SP, RJ, ES): ");
  scanf(" %c", &estado);

  switch (estado) {
  case 'M':
  case 'm':
    imposto = produto * 0.07;
    break;
  case 'S':
  case 's':
    imposto = produto * 0.12;
    break;
  case 'R':
  case 'r':
    imposto = produto * 0.15;
    break;
  case 'E':
  case 'e':
    imposto = produto * 0.08;
    break;
  default:
    printf("Estado inválido!\n");
    return 1;
  }

  final = produto + imposto;
  printf("O preço final do produto no estado %c é: %.2f\n", estado,
         final);

  return 0;
}
