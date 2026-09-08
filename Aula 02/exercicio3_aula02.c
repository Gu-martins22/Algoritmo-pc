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
