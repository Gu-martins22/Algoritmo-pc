#include<stdio.h>
#include<locale.h>
#include<math.h>
#define lin 3
#define col 12

int main()
{
	setlocale(LC_CTYPE, "");

    const char *meses[] = {"jan", "fev", "mar", "abr", "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};
    const char *operadoras[] = {"Vivo", "Claro", "Tim"};

    int vendas[lin][col], totalOperadora[3]={0, 0, 0};
    int totalGeral=0, totalMes, maiorTotalMes=0;
    int melhorMes=0, melhorOperadora=0;
    int i, j, media_geral, media_individual[3];

    // Registrar as vendas de cada operadora
    for(i=0; i<lin; i++){
        printf("\nDigite as vendas da operadora %s:\n", operadoras[i]);

        for(j=0; j<col; j++){
            printf("%s: ", meses[j]);
            scanf("%d", &vendas[i][j]);
        }
    }

    // Calcular o total geral e o total por operadora
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            totalOperadora[i] += vendas[i][j];
            totalGeral += vendas[i][j];
        }
    }

    // Calcular as médias depois de somar todas as vendas
    media_geral = ceil(totalGeral / 36.0);

    for(i = 0; i < lin; i++){
    media_individual[i] = ceil(totalOperadora[i] / 12.0);
    }


    // Encontrar o mês com maior total de vendas
    for(j=0; j<col; j++){
        totalMes = 0;

        for(i=0; i<lin; i++){
            totalMes += vendas[i][j];
        }

        if(totalMes > maiorTotalMes){
            maiorTotalMes = totalMes;
            melhorMes = j;
        }
    }

    // Encontrar a operadora com maior venda anual
    for(i=0; i<lin; i++){
        if(totalOperadora[i] > totalOperadora[melhorOperadora]){
            melhorOperadora = i;
        }
    }

    //Relatório
    printf("\n------------------------------------------\n");
    printf("RELATORIO ANUAL DE VENDAS\n");

    printf("\nMedia mensal geral: %d chips\n\n", media_geral);

    for (int i = 0; i < 3; i++) {
        printf("Media da %s: %d chips\n", operadoras[i], media_individual[i]);
    }

    printf("\nMes com maior media de vendas: %s - %d chips\n", meses[melhorMes], maiorTotalMes);

    printf("Operadora com maior venda anual: %s - %d chips\n", operadoras[melhorOperadora], media_individual[melhorOperadora]);

	return 0;
}
