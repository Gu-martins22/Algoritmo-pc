/*
2- Desenvolva um programa em C que:
- leia 8 valores reais e armazene-os
em um vetor;
- calcule a média dos valores;
- determine quantos valores ficaram
acima da média.
*/

#include<stdio.h>
#include<locale.h>
#define tam 8

int main ()
{
    setlocale(LC_CTYPE, "");

    int i, contador;
    float valores[tam];
    float soma, media;

    for(i=0; i<tam; i++){
        printf("Digite o %d° valor: ", (i+1));
        scanf("%f", &valores[i]);
    }

    for(i=0; i<tam; i++){
        soma += valores[i];
    }

    media = soma/tam;

    for(i=0; i<tam; i++){
        if(valores[i] > media){
            contador++; //conta os valores acima da média
        }
    }

    printf("\nMédia dos valores: %.2f\n", media);
    printf("Quantidade de valores acima da média: %d\n", contador);

    return 0;
}
