/*
Um estudante quer gerar uma tabuada e consultá-la depois, mesmo após encerrar o
programa.

3- Desenvolva um algoritmo e um 
programa em C que abra o arquivo
`tabuada.txt`, leia todas as
linhas e exiba seu conteúdo na tela.
*/

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    char linha[100];
    FILE *arquivo = fopen("tabuada.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }

    return 0;
}
