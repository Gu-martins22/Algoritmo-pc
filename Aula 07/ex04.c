/*
4- Um órgão regional de monitoramento climático registrou a temperatura média de cinco
municípios. A partir desses dados, deseja-se produzir um relatório resumido sobre as condições
observadas na região. Desenvolva um programa em C que leia o nome e a temperatura média de
cada um dos cinco municípios e apresente:
▪ temperatura média da região;
▪ quantidade de municípios cuja temperatura média seja inferior a 10 °C;
Para simplificar a entrada de dados, considere nomes de municípios sem espaços.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
    char municipio[50];
    int i, temperatura, temp_baixa;

    for(i=1; i<=5; i++){
        printf("\nMunicipio %d: ", i);
        scanf("%49s", municipio);
        printf("Temperatura media em graus celsius: ");
        scanf("%d", &temperatura);

        if(temperatura<10){
            temp_baixa += 1;
        }
    }
    printf("\nQuantidade de municipios com temperatura media inferior a 10 °C: %d\n", temp_baixa);

	return 0;
}
