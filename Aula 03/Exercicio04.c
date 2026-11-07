/*
Uma empresa deseja estimar o consumo mensal de energia de um equipamento. Para
isso, basta conhecer a potência do equipamento (em watts) e a quantidade de horas de
funcionamento por dia. Considere que o equipamento funciona durante 30 dias no mês.

4- Desenvolva um programa em C que: leia a potência do equipamento (em watts) e a quantidade de
horas de funcionamento por dia; calcule o consumo mensal em quilowatt-hora (kWh), utilizando a
fórmula: consumo = (potencia*horas_dia*30)/1000; exiba o consumo mensal com duas casas
decimais.
*/

#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    int potencia, horas;
    float consumo;

    printf("Potência do equipamento (W)? ");
    scanf("%d", &potencia);
    printf("Horas de uso por dia? ");
    scanf("%d", &horas);

    consumo=(float)(potencia*horas*30)/1000;

    printf("Consumo mensal: %.2f kwh", consumo);

    return 0;
}
