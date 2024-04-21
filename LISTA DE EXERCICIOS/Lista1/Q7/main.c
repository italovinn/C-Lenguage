#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d=1;  //Declarado as variaveis do Tipo inteira e declarando que dentro da variavel "d" contem o numero 1.

    a=-2; //aqui eu declarei que dentro da variavel "a" contem o valor de numero negativo (-2)
    b=a*a; //aqui eu declarei que dentro da variavel "b" tem o resultado da equação a*a(multiplicação entre a variavel "a" -> (-2) ) que terá o valor de numero 4 ja quem multiplicação de sinais iguais sempre será positivo(ou seja, negativo*negativo=positivo)
    c=d++; //aqui eu declarei que dentro da variavel "c" contem o valor da variavel "d"->(1) incrementando 1 transformando o resultado em 2
    d=c++ + 5; //aqui eu declarei que o valor da variavel "d" seja a soma de "c" e 5 incrementando 1 a soma, gerando o resultado d=6 e c=2
    d=++c + 5; //aqui eu declarei que o valor da variavel "d" incrementa o valor da variavel "c" depois soma 5, assim resultando em 8

    printf("%d %d %d %d", a, b, c, d); //aqui eu pedi para que o sistema de print na tela mostrando o valor das variaveis, para isso eu usei o %d que é um indicador que chama uma variavel inteira, porem deve-se apos as aspas declarar na ordem requerente qual variavel a pessoa decidiu na ordem

    return 0;
}
