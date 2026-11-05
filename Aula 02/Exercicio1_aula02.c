/*
Em uma oficina mecânica, muitas peças possuem formato circular, como rolamento,
engrenagens e polias. Para calcular a quantidade de material necessária para fabricar uma
proteção ao redor de uma peça circular, o técnico precisa conhecer o comprimento da
borda dessa peça, ou seja, o perímetro da circunferência.

1- Desenvolva um programa em C que leia o valor do raio de uma peça circular (em centímetros),
calcule o perímetro da circunferência usando a fórmula: perímetro = 2 * pi * raio e exiba o resultado
com duas casas decimais.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float raio, perimetro, pi;

    printf("Qual a medida do raio (em cm)? ");
    scanf("%f", &raio);

    pi = 3.14;
    perimetro = 2*pi*raio;

    printf("O perimetro da circunferência é %.2f cm\n", perimetro);

    return 0;

    }
