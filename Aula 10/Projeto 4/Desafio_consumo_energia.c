#include<stdio.h>
#include<locale.h>
#define labs 4
#define dias 7

float calcular_total(float consumo[labs][dias])
{
    float total = 0;
    int i, j;

    for(i=0; i<labs; i++){
        for(j=0; j<dias; j++){
            total += consumo[i][j];
        }
    }
    return total;
}

void calcular_media(float consumo[labs][dias], const char *laboratorios[])
{
    int i, j;
    float media, total;

    for(i = 0; i < labs; i++){
            total = 0;

        for(j = 0; j < dias; j++){
            total += consumo[i][j];
        }

        media = total / dias;

        printf("Media do %s: %.2f kWh\n", laboratorios[i], media);
    }
}

void buscar_dia_maior_consumo(float consumo[labs][dias], const char *dia[])
{
    int i, j;
    float consumo_maior=0, total_dia=0;
    int dia_maior =0;


    for(j=0; j<dias; j++){
            total_dia = 0;

        for(i=0; i<labs; i++){
            total_dia += consumo[i][j];
        }

        if(total_dia > consumo_maior){
            consumo_maior = total_dia;
            dia_maior = j;
        }
    }

    printf("\nDia com maior consumo:\n");
    printf("%s - %.2f kWh\n", dia[dia_maior], consumo_maior);
}

void buscar_labs_maior_consumo(float consumo[labs][dias], const char *laboratorios[])
{
    int i, j;
    float soma, consumo_maior=0;
    int labs_maior;

    for(i=0; i<labs; i++){
            soma = 0;
        for(j=0; j< dias; j++){
            soma += consumo[i][j];
        }
        if(soma > consumo_maior){
            consumo_maior = soma;
            labs_maior = i;
        }
    }
    printf("\nDia com maior consumo:\n");
    printf("%s - %.2f kWh\n", laboratorios[labs_maior], consumo_maior);
}

void contar_acima_limite(float consumo[labs][dias], const char *dia[])
{
    int i, j, acima_limite = 0;

    for(i=0; i<labs; i++){
        for(j=0; j< dias; j++){
            if(consumo[i][j] > 100){
                acima_limite++;
            }
        }
    }
    printf("\nRegistros acima de 100 kWh: %d\n", acima_limite);
}

void gerar_relatorio(float consumo[labs][dias], const char *dia[], const char *laboratorios[])
{
    printf("\n===== RELATORIO DE CONSUMO =====\n");

    float total = calcular_total(consumo);

    printf("\nConsumo total geral: %.2f kWh\n\n", total);

    calcular_media(consumo, laboratorios);

    buscar_dia_maior_consumo(consumo, dia);

    buscar_labs_maior_consumo(consumo, laboratorios);

    contar_acima_limite(consumo, dia);
}


int main()
{
	setlocale(LC_CTYPE, "");

	float consumo[labs][dias];
	int i, j;

    const char *dia[] = {
    "seg", "ter", "qua", "qui",
    "sex", "sab", "dom"
    };

    const char *laboratorios[] = {
    "Lab A", "Lab B", "Lab C", "Lab D"
    };

    for(i=0; i<labs; i++){
            printf("\n");
        for(j=0; j<dias; j++){
            printf("Consumo do %s - %s:\n", laboratorios[i], dia[j]);
            scanf("%f", &consumo[i][j]);
        }
    }

    gerar_relatorio(consumo, dia, laboratorios);

	return 0;
}
