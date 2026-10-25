/*1- Desenvolva um algoritmo e um
programa em C que leia o CPF do cliente e,
em seguida, os preços dos produtos
adquiridos. A entrada dos produtos deverá
continuar até que seja informado o valor 0,
indicando o encerramento da compra. Ao
final, apresente o CPF do cliente e o valor
total da compra.

Entrada:
CPF: 12345678901
Preço: 12.50
Preço: 8.90
Preço: 5.60
Preço: 0
Saída:
CPF: 12345678901
Total da compra: R$ 27.00*/

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int cpf;
    float preco, total_compra=0;

    printf("CPF: ");
    scanf("%d", &cpf);

    // Se o preço for menor que 0, o comando acaba!!
    while(1){
        printf("Preço: R$ ");
        scanf("%f", &preco);

        total_compra += preco;
//Essa função acima é equivalente a (total_compra = total_compra + preco;)

        if(preco==0){
            break;
        }
    }

    printf("\nCPF: %d", cpf);
    printf("\nTotal da compra: R$ %.2f", total_compra);

    return 0;
}
