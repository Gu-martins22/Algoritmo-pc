#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
	FILE *arquivo;
	int opcao, mes, cadastros=0;
	float consumo, soma=0, media;

    do{
    printf("\nEscolha uma opção:\n");
    printf("1- Cadastrar consumo\n");
    printf("2- Exibir relatório\n");
    printf("3- Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        // CADASTRO DO CONSUMO
        case 1:
        printf("\nDigite o número do mês: ");
        scanf("%d", &mes);

        if(mes < 1 || mes > 12){
            printf("Mês inválido!\n");
            break;
        }

        printf("Consumo de energia em kWh: ");
        scanf("%f", &consumo);

        if(consumo < 0){
            printf("Consumo inválido!\n");
            break;
        }

        arquivo = fopen("energia.txt", "a");

        if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
        }

        fprintf(arquivo, "%d %.2f\n", mes, consumo);

        fclose(arquivo);

        printf("Consumo registrado!\n");
        break;

        // RELATÓRIO DO CONSUMO
        case 2:
        arquivo = fopen("energia.txt", "r");

        if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
        }

        printf("\n----- RELATÓRIO ------\n");

        while(fscanf(arquivo, "%d %f\n", &mes, &consumo)== 2){
            printf("\nMês: %d\n", mes);
            printf("Consumo: %.2f kWh\n", consumo);

            soma += consumo; //
            cadastros++;
        }

        fclose(arquivo);

        printf("\nTotal do consumo: %.2f kWh\n", soma);

        if(cadastros > 0){
            printf("Média do consumo: %.2f kWh\n", soma/cadastros);
        }
        else{
            printf("\nNenhuma média!\n");
        }

        break;

        case 3:
            printf("\nPrograma encerrado!\n");
            break;

        default:
            printf("\nOpção inválida\n");

    }

    }while(opcao != 3);

	return 0;
}
