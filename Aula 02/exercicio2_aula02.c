/*
Uma empresa de paisagismo está elaborando o projeto de um jardim retangular. Para
instalar uma cerca ao redor do jardim, é necessário conhecer o seu perímetro, e para
calcular a quantidade de grama que será utilizada, é preciso determinar a área do terreno.

2- Desenvolva um programa em C que leia o comprimento e a largura de um jardim retangular
(em metros); calcule o perímetro do jardim utilizando a fórmula: perímetro = 2 * (comprimento + largura) 
e a área do jardim utilizando a fórmula: área = comprimento * largura. Ao final exiba os
resultados com duas casas decimais.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float comprimento, largura, perimetro, area;
    printf("Qual o comprimento do jardim (m)?\n ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim (m)?\n ");
    scanf("%f", &largura);

    perimetro = 2*(comprimento+largura);
    area = comprimento*largura;

    printf("O perímetro do jardim é %.2f m\n", perimetro);
    printf("A área do jardim é %.2f m²\n", area);
    return 0;
}
