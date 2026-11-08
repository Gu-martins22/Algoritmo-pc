/*
Um hotel oferece diferentes tipos de acomodação, cada um com um valor específico de
diária. Para agilizar o atendimento, o sistema deve calcular automaticamente o valor total
da hospedagem de acordo com o tipo de quarto escolhido e a quantidade de diárias.

5- Desenvolva um programa em C que leia o código correspondente ao tipo de diária e a quantidade
de diárias desejada pelo cliente. Considere as seguinte categorias com seus respectivos valores:
Simples (S) - R$ 300,00; Duplo (D) - R$ 450,00; e Triplo (T) – R$ 500,00. Calcule e exiba o valor
total da hospedagem. Ao ser informado um código inexistente exiba a mensagem: Tipo inválido!!!
*/

#include<stdio.h>
#include<locale.h>


int main()
{
    setlocale(LC_CTYPE, "");
    char opcao;
    float num_diarias;

    printf("Hospedagem Anália\n");
    printf("[S] quarto simples\n");
    printf("[D] quarto duplo\n");
    printf("[T] quarto triplo\n");
    printf("Digite uma opção: ");
    scanf(" %c", &opcao);

    printf("Qual a quantidade de diárias: ");
    scanf("%f", &num_diarias);

    if(opcao == 's' || opcao == 'S'){
        printf("Total a pagar R$ %.2f", (num_diarias*300));
    } else if(opcao == 'd' || opcao == 'D'){
        printf("Total a pagar R$ %.2f", (num_diarias*450));
    } else if(opcao == 't' || opcao == 'T'){
        printf("Total a pagar R$ %.2f", (num_diarias*600));
    } else {
        printf("Opção inválida!!!");
    }

    return 0;
}
