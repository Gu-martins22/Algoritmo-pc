#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
    int codigo_cadete, etapa, continuar, i;
    int pontuacao, pontuacao_total;
    int maior, menor;
    float media;

    do{
        pontuacao=0;
        pontuacao_total=0;
        media=0;
        etapa=0;

/*É necessário zerar essas variáveis para que os valores
do próximo comando não sejam afetados! */

    printf("\n==========MISSÃO ORBITAL==========\n");
    printf("Código do cadete: ");
    scanf("%d", &codigo_cadete);
    printf("\n");

    if(codigo_cadete<0){
        printf("Código Inválido!\n");
        printf("Código do cadete: ");
        scanf("%d", &codigo_cadete);
        printf("\n");
    }

    for(i=1; i<=3; i++){
        printf("Pontuação da etapa %d: ", i);
        scanf("%d", &pontuacao);

        while (pontuacao < 0 || pontuacao > 100) {
        printf("Pontuação Inválida! \n");
        printf("Pontuação da etapa %d: ", i);
        scanf("%d", &pontuacao);
    }/*Caso a resposta estiver incorreta é necessário
    acrescentar um scanf para desconsiderar a resposta
    errada!*/
        pontuacao_total += pontuacao;
        media = (float)pontuacao_total/i;

        if(pontuacao >=80){
            etapa++;
        }

        if(pontuacao > maior){
            maior = pontuacao;
        }

    }

    printf("\n-------------RESULTADO--------------");
    printf("\nCódigo do cadete: %d", codigo_cadete);

    printf("\nPontuação total: %d pontos", pontuacao_total);
    if (pontuacao_total==300){
        printf("\nPONTUAÇÃO MÁXIMA!!");
    }

    printf("\nMédia: %.2f", media);

    printf("\nClassificação: ");
    if(media>=85){
        printf("Treinamento concluído com excelência.");
    }
    else if (media>=70){
        printf("Cadete autorizado para a missão.");
    }
    else if (media>=50){
        printf("Novo treinamento recomendado.");
    }
    else{
        printf("Cadete ainda não autorizado.");
    }

    printf("\n------------------------------------");

    printf("\nEtapas com pontuação igual ou superior a 80: %d", etapa);
    printf("\nMaior pontuação: %d\n", maior);

    printf("\nAvaliar outro cadete? 1-Sim | 0-Não\n");
    scanf("%d", &continuar);

        if(continuar==1){
            continue;
        }
        else{
            printf("Sistema encerrado!\n");
            break;
        }

    } while(1);


	return 0;
}
