/* 3- Desenvolva um programa em C que leia
números inteiros e some somente os valores
ímpares. O número 0 deverá indicar o
encerramento da entrada de dados. Ao final,
apresente a soma dos números ímpares
informados.

Entrada:
Digite um número: 5
Digite um número: 8
Digite um número: 3
Digite um número: 10
Digite um número: 7
Digite um número: 0
Saída:
Soma dos números ímpares: 15 */

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int i, num, soma=0;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num%2 !=0) {
            soma += num;
        }
    } while(num>0);

    printf("\nA Soma dos números ímpares é: %d", soma);

    return 0;
}
