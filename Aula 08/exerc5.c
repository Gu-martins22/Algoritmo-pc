/*
5- Desenvolva um programa em C que:
- leia as 4 notas de 3 estudantes;
- calcule e exiba a média de cada
estudante;
- identifique o estudante com a maior
média.
*/

#include<stdio.h>
#include<locale.h>
#define lin 3
#define col 4

int main ()
{
    setlocale(LC_CTYPE, "");

    int i, j, achei;
    float notas[lin][col];
    float soma, media, maior_media=0;

    // Leitura das notas
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf("Digite a %d° nota do %d° estudante: ", (i+1), (j+1));
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

    // Cálculo das médias
    for(i=0; i<lin; i++){
            soma=0;
        for(j=0; j<col; j++){
            soma += notas[i][j];
        }
        media = soma/(float)col;
        printf("\nA média do estudante %d: %.2f\n", (i+1), media);

        if(media > maior_media){
            maior_media = media;
        }
    }
    achei=i; // achei = estudante com a maior média

    printf("\nMaior média: estudande %d - %.2f\n", achei, maior_media);

    return 0;
}
