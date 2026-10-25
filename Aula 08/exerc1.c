/*
1- Desenvolva um programa em C que:
- leia o salário de 4 funcionários;
- armazene os valores em um vetor;
- exiba os salários na mesma ordem
em que foram digitados.
*/

#include<stdio.h>
#include<locale.h>
#define tam 4

int main ()
{
    setlocale(LC_CTYPE, "");
    int i;
    float salarios[tam];

    for(i=0; i<tam; i++){
        printf("Digite o salário do funcionário %d: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    for(i=0; i<tam; i++){
        printf("\nSalário do funcionário %d: R$ %.2f\n", (i+1), salarios[i]);
    }


    return 0;
}
