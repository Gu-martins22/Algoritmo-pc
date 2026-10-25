/* 6- Desenvolva um algoritmo e um programa em C
que apresente o cardápio e permita ao cliente
adicionar produtos informando seus códigos. Após
cada produto válido, apresente o subtotal do
pedido. O código 0 deverá finalizar a compra e
apresentar o valor total. Utilize do...while.

Entrada:
Digite uma opção: 1
Digite uma opção: 3
Digite uma opção: 2
Digite uma opção: 0
Saída:
Subtotal: R$ 18.00
Subtotal: R$ 25.00
Subtotal: R$ 37.00
Total do pedido: R$ 37.00 */

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float total=0;
    int opcao;

    printf("\nCafeteria Anália\n");
    printf("[1] X-Burger (R$ 18,90)\n");
    printf("[2] Batata frita (R$ 9,50)\n");
    printf("[3] Suco (R$ 10,00)\n");
    printf("[4] Pudim (R$ 12,00)\n");
    printf("[0] Sair\n");

    do{
        printf("\nDigite uma opçao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            total = total + 18.90;
            break;

        case 2:
            total = total + 9.50;
            break;

        case 3:
            total = total + 10.00;
            break;

        case 4:
            total = total + 12.00;
            break;

        case 0:
            break;

        default:
            printf("Opção inválida!!\n");
        }

        if (opcao >=1 && opcao <=4){
            printf("Subtotal: R$ %.2f\n", total);
        }

    } while(opcao !=0);

    printf("\nTotal do pedido: R$ %.2f\n", total);

    return 0;
}
