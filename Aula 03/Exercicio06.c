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
