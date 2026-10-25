/*
Um aplicativo mantém o histórico do consumo semanal de água de uma residência.
Como o arquivo pode conter registros anteriores, os novos dados devem ser
acrescentados sem apagar as informações já armazenadas.

2- Desenvolva um algoritmo e um
programa em C que Leia a
quantidade de registros que serão
cadastrados. Para cada registro, leia o
dia da semana e o consumo de água
em litros. Acrescente os dados ao
arquivo consumo.txt, utilizando
uma linha para cada registro.
*/

#include<stdio.h>
#include<locale.h>

int main ()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    char dias[4];
    int i, num;
    float consumo;

    arquivo = fopen("consumo.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("Dia: ");
        scanf("%s", dias);
        printf("Consumo: ");
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.1f\n", dias, consumo);
    }

    printf("\nArquivo criado com sucesso!\n");

    fclose(arquivo);

    return 0;
}
