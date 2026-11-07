/*
Uma calculadora utilizada em um ambiente educacional apresenta aos estudantes os
principais resultados das operações aritméticas entre dois números inteiros, permitindo
comparar diferentes operações de forma rápida.

3- Desenvolva um programa em C que: (i) leia dois números inteiros; (ii) calcule a soma, a subtração
do primeiro pelo segundo e a multiplicação entre eles; (iii) exiba os resultados.
*/

#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    int num1, num2, soma, subtracao, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma= num1+num2;
    subtracao= num1-num2;
    multiplicacao= num1*num2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d", multiplicacao);

    return 0;
}
