/*
Em uma disciplina, as avaliações possuem níveis diferentes de importância. Por essa
razão, a nota final não é calculada por uma média simples, mas por uma média
ponderada. A primeira avaliação possui peso 1, a segunda peso 2 e a terceira peso 4.

8- Desenvolva um programa em C que: (i) leia três notas; (ii) calcule a média ponderada,
considerando os pesos 1, 2 e 4; (iii)exiba o resultado com duas casas decimais.
*/

#include<stdio.h>
#include<locale.h>>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media= (nota1*1 + nota2*2 + nota3*4)/7;

    printf("A média ponderada é %.2f", media);
    return 0;
}
