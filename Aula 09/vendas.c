#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
    FILE *arquivo;
    int i, venda;
    float valor;

    arquivo = fopen("vendas.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    for(i=0; i<3; i++){
        printf("Digite a quantidade da venda: ");
        scanf("%d", &venda);
        printf("Digite o valor da venda: ");
        scanf("%f", &valor);
        fprintf(arquivo, "%d %.2f\n", venda, valor);
    }

    printf("\nArquivo criado com sucesso!\n");

    fclose(arquivo);

	return 0;
}
