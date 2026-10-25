/*
Uma loja registra em `vendas.txt` o código e o valor de cada venda concluída.

5- Desenvolva um algoritmo e um
programa em C que leia o arquivo e
exiba a quantidade de vendas, o total
vendido e o maior valor registrado.

obs: Para este exercício, você poderá criar o
arquivo de entrada no bloco de notas ou
criar um programa para armazenar os
dados.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
	int i, venda, contador=0;
    float valor, soma=0, maior_venda;
    FILE *arquivo = fopen("vendas.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%d %f", &venda, &valor) != EOF){
        soma += valor;
        contador++;
        if(valor > maior_venda)
            maior_venda = valor;
    }

    printf("Quantidade de vendas: %d\n", contador);
    printf("Total vendido: R$ %.2f\n", soma);
    printf("Maior venda: R$ %.2f\n", maior_venda);


	return 0;
}
