/*
m algumas situações de engenharia e física, determinados cálculos podem ser
modelados por uma equação do segundo grau. Para encontrar os valores que satisfazem
essa equação, é necessário calcular suas raízes a partir dos coeficientes a, b e c.

1- Desenvolva um algoritmo e um programa em C que leia os valores dos coeficientes a, b e c de
uma equação do segundo grau do tipo ax2 + bx + c = 0. Considere que a equação possui duas raízes
reais. Calcule e exiba os valores de x₁ e x₂, utilizando a fórmula de Bhaskara.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float delta, x1, x2, a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if(delta >= 0){
    delta= pow(b, 2)- 4*a*c;
    x1= (-b + sqrt(delta))/(2*a);
    x2= (-b - sqrt(delta))/(2*a);

    printf("As raízes da equação são: \n");
    printf("x1= %.2f\n", x1);
    printf("x2= %.2f\n", x2);
    }

    else {
        printf("Não existem raízes reais!!");}

    return 0;
}
