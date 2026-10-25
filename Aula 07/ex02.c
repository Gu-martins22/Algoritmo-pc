/*
2- Uma pequena loja registra, ao final de cada dia, o
valor total obtido com as vendas. Para acompanhar o
desempenho semanal, o responsável deseja conhecer o
valor acumulado das vendas realizadas durante os sete
dias da semana.
Desenvolva um programa em C que leia o valor das vendas
de cada um dos 7 dias e apresente o total vendido na semana.
Utilize a estrutura de repetição que considerar mais adequada.
*/
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
	int i=1;
    float valor, total;

    while(1){
        printf("\nTotal do dia %d: R$ ", i);
        scanf("%f", &valor);
        i++;
        total += valor;
        if(i>8){
            break;
        }
        printf("Valor total da semana: R$ %.2f\n", total);

    }


	return 0;
}
