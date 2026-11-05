/*
Durante o acompanhamento gestacional, é comum que o tempo de gestação seja
informado em semanas. Para fins de estimativa, considere que cada semana possui 7
dias e que um mês possui 30 dias.

3- Elabore um algoritmo e um programa em linguagem C que leia a quantidade de semanas de
gestação e calcule a quantidade aproximada de meses correspondentes.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int semanas, dias;
    float meses;
    printf("Qual a quantidade de semanas de gestação? ");
    scanf("%d", &semanas);

    dias = semanas*7;
    meses = dias/30;

    printf("O tempo de gestação aproximado: %.2f meses", meses);
    return 0;
}
