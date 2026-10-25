/*
4- Desenvolva um programa em C que:
. leia as vendas de 3 produtos
durante 4 dias;
. calcule o total vendido de cada
produto;
. calcule o total geral de itens
vendidos
*/

#include<stdio.h>
#include<locale.h>
#define lin 3
#define col 4

int main ()
{
    setlocale(LC_CTYPE, "");
    int i, j, total_produtos, soma_total=0;
    int valores[lin][col];

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("Digite a quantidade do produto %d no dia %d: ", (i+1), (j+1));
            scanf("%d", &valores[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<lin; i++){
            total_produtos = 0;
        for(j=0; j<col; j++){
            total_produtos += valores[i][j];
        }
        soma_total += total_produtos;
        printf("Produto %d: %d unidades\n", (i+1), total_produtos);
    }
    printf("Total geral: %d unidades\n", soma_total);

    return 0;
}
