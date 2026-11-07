/*
Uma loja especializada em pisos cerâmicos precisa calcular quantas caixas serão
necessárias para revestir uma área. Como cada caixa cobre uma quantidade fixa de
metros quadrados, a loja deve considerar sempre uma caixa inteira, mesmo quando a
divisão não resultar em um número exato.

6- Desenvolva um programa em C que: (i) leia largura e o comprimento da área a ser revestida e o
valor unitário da caixa de piso escolhido pelo cliente; (ii) calcule a área total a ser revestida utilizando,
a quantidade de caixas necessárias, considerando que cada caixa cobre 2.5 m², e o custo total da
compra; exiba a quantidade de caixas e o custo total com duas casas decimais.
*/

#include<stdio.h>
#include<locale.h>>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float area, largura, comprimento, valor_caixa, custo, qntd_caixa;

    printf("Qual a largura da área em metros? ");
    scanf("%f", &largura);
    printf("Qual o comprimento da área em metros? ");
    scanf("%f", &comprimento);
    printf("Qual o valor de cada caixa? ");
    scanf("%f", &valor_caixa);

    area= largura*comprimento;
    qntd_caixa= ceil(area/2.5);
    custo= valor_caixa*qntd_caixa;

    printf("Área total: %.2f m²\n", area);
    printf("Quantidade de caixas necessárias: %.1f\n", qntd_caixa);
    printf("Custo total: %.2f", custo);

    return 0;
}
