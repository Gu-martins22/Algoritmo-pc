/*
2- Desenvolva um programa em C que
leia e armazene os salários de 6
funcionários e, depois:
1. calcule a média salarial;
2. determine o maior salário;
3. conte quantos salários estão abaixo
da média.
*/

#include<stdio.h>
#include<locale.h>
#define tam 5

int main ()
{
    setlocale(LC_CTYPE, "");

    int i, contador=0, achei_maior;
    float salarios[tam];
    float media, soma=0, maior_salario;

    for(i=0; i<tam; i++){
        printf("Digite o salário do funcionário %d: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    for(i=0; i<tam; i++){
        printf("\nSalário do funcionário %d: %.2f\n", (i+1), salarios[i]);
    }

    for(i=0; i<tam; i++){
        soma += salarios[i]; //-->Acumulador
    }
    media = soma/tam;

    for(i=0; i<tam; i++){
        if(salarios[i] > media){
            contador++; //conta os salários acima da média
        }
        if(salarios[i]>maior_salario){
            maior_salario = salarios[i]; //verifica o maior salário
            achei_maior = i+1; //índice do maior salário
        }

    }

    printf("\nMédia dos salários: %.2f\n", media);
    printf("Quantidade de salários acima da média: %d\n", contador);
    printf("Maior salário do funcionário %d: %.2f\n", achei_maior, maior_salario);

    return 0;
}
