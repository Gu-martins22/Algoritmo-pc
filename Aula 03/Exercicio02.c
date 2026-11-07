/*
Diversos sistemas computacionais armazenam horários em minutos para facilitar cálculos
de duração, agendamentos e controle de atividades. Para isso, é necessário converter um
horário convencional (horas e minutos) para a quantidade total de minutos transcorridos
desde o início do dia.

2- Desenvolva um programa em C que: (i) leia a hora e os minutos de um determinado horário; (ii)
calcule quantos minutos se passaram desde as 00h00; (iii) exiba o resultado.
*/

#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    int horas, minutos, total;

    printf("Hora? ");
    scanf("%d", &horas);
    printf("Minutos? ");
    scanf("%d", &minutos);

    total= (60*horas)+ minutos;

    printf("Já se passaram %d minutos desde o início do dia.", total);

    return 0;
}
