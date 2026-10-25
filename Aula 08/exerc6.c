/*
6- Leia 7 temperaturas e armazene-as
em um vetor. Calcule:
- a média semanal;
- a maior temperatura;
- a menor temperatura;
- quantos dias ficaram acima da
média.
*/

#include<stdio.h>
#include<locale.h>
#define tam 7

int main ()
{
    setlocale(LC_CTYPE, "");
    const char *dias_semana[] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom"};
    int i, dias_acima;
    float temperaturas[tam];
    float maior, menor, soma=0, media;

    for(i=0; i<tam; i++){
        printf("Digite a temperatura da %s: ", dias_semana[i]);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }
    media = soma/(float)tam;
    maior = menor = temperaturas[0];

    for(i=0; i<tam; i++){
        if(temperaturas[i] > maior)
            maior = temperaturas[i];
        if(temperaturas[i] < menor)
            menor = temperaturas[i];
        if(temperaturas[i] > media)
            dias_acima++;
    }

    printf("\nMédia: %.2f\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da média: %d\n", dias_acima);

    return 0;
}

//618224
