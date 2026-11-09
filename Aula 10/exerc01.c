/*
Uma transportadora calcula o valor do frete considerando o peso do pacote. Para
determinado serviço, são cobrados R$ 4,50 por quilograma. Como esse cálculo será
realizado muitas vezes pelo sistema, a regra deve ser implementada em uma função.

1- Desenvolva um programa que leia o
peso do pacote e utilize a função:
para calcular e retornar o valor do frete.
*/

#include<stdio.h>
#include<locale.h>

float calcular_frete(float peso)
{
    return peso * 4.5;
}

void imprimir_frete (float peso)
{
    printf("\nValor do frete: R$ %.1f\n", calcular_frete(peso));
}

int main ()
{
    setlocale(LC_CTYPE, "");
    float peso;
    char opcao;

    while(1){ // ou While(opcao == 's' || opcao == 'S')
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        imprimir_frete(peso);

        printf("\nDeseja calcular outro frete (s/n)? ");
        scanf(" %c", &opcao);

        if(opcao == 'n' || opcao == 'N'){
            break; // o if com break quebra o loop infinito do While(1)
        }
    }

    return 0;
}
