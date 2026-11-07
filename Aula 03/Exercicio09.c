/*
Sistemas de mapas, jogos digitais, aplicações de engenharia e programas de computação
gráfica precisam calcular a distância entre diferentes posições. Em um plano cartesiano,
cada posição pode ser representada por um par de coordenadas.

9- Desenvolva um programa em C que: (i) leia as coordenadas (x1, y1) e (x2, y2) de dois pontos; (ii)
calcule e exiba a distância entre eles usando a fórmula da distância euclidiana.
*/

#include<stdio.h>
#include<locale.h>>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float x1, y1, x2, y2, d;

    printf("Digite a coordenada x do 1° ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do 1° ponto: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x do 2° ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do 2° ponto: ");
    scanf("%f", &y2);

    d= sqrt (pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("A distância entre os pontos é: %.2f", d);
    return 0;
}
