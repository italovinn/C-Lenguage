#include <stdio.h>
#include <stdlib.h>

int opcao;

int menu(){

    printf("Escolha um desses para continuar com o seu calculo\n");

    printf("[1] Soma\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    scanf("%d", &opcao);

    return opcao;
}

int main(){
    int nu1, nu2, resultado, repete;

    printf("Digite um numero para calcular: ");
    scanf("%d", &nu1);
    printf("Digite outro numero para calcular: ");
    scanf("%d", &nu2);


    do{
        menu();

        switch(opcao){
            case 1:
                resultado= somar(nu1, nu2);
            break;
            case 2:
                resultado= sub(nu1, nu2);
            break;
            case 3:
                resultado= multi(nu1, nu2);
            break;
            case 4:
                resultado= divi(nu1, nu2);
            break;
            default:
                repete= 1;
            break;
        }
    }while(repete);

    printf("O Resultado e: %d", resultado);


    return 0;
}

int somar(int n1, int n2){
    int soma;

    soma= n1+n2;

    return soma;
}

int sub(int n1, int n2){
    int subtracao;

    subtracao= n1-n2;

    return subtracao;
}

int multi(int n1, int n2){
    int multiplicacao;

    multiplicacao= n1*n2;

    return multiplicacao;
}

int divi(int n1, int n2){
    int divisao;

    divisao= n1/n2;

    return divisao;
}
