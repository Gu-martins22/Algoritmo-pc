/*
Faça um programa em que apareça somente a soma de
números primos
*/
#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int num, soma=0;

    while(1) {
        printf("Digite um número par para sair: ");
        scanf("%d", &num);
        if(num%2 ==0)
            break; // Sem o break o comando aparece infinitamente!
        soma += num;
    }
    printf("Soma = %d", soma);


    return 0;
}
