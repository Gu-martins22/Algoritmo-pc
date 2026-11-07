/*
Em um aplicativo educacional, quatro resultados de atividades precisam ser reunidos em
um único indicador. Para isso, o sistema calcula a média aritmética dos valores
informados.

7- Desenvolva um programa em C que: (i) leia quatro números reais; (ii) calcule a média aritmética
utilizando a fórmula: media = (num1 + num2 + num3 + num4)/4; (iii)exiba o resultado com duas
casas decimais.
*/

#include<stdio.h>
#include<locale.h>>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float num1, num2, num3, num4, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);
    printf("Digite o quarto valor: ");
    scanf("%f", &num4);

    media= (num1+num2+num3+num4)/4;

    printf("A média aritmética é: %.2f", media);
    return 0;
}
