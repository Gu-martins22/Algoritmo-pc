/*
Um centro de distribuição recebe mercadorias em dois turnos diariamente. Ao final do
expediente, é necessário calcular o total de produtos recebidos para atualizar o estoque
do dia.

1- Desenvolva um programa em C que: (i) leia a quantidade de produtos recebidos no turno da
manhã e a quantidade de produtos recebidos no turno da tarde; Ii) calcule o total de produtos
recebidos; (iii) exiba o resultado.
*/

#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    int manha, tarde, total;

    printf("Quantidade recebida pela manhã: ");
    scanf("%d", &manha);
    printf("Quantidade recebida à tarde: ");
    scanf("%d", &tarde);

    total = manha + tarde;

    printf("Total de produtos recebidos no dia: %d", total);

    return 0;
}
