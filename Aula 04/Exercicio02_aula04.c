/*
Em uma disciplina, o desempenho acadêmico de um estudante é acompanhado por meio
de duas avaliações. Ao final do período, a média dessas notas é utilizada para determinar
sua situação acadêmica.

2- Desenvolva um algoritmo e um programa e C que leia as duas notas de um aluno, calcule sua
média aritmética e informe sua situação. O aluno deverá ser considerado aprovado caso obtenha
média maior ou igual a 6,0; caso contrário, deverá ser considerado reprovado.
*/

#include<stdio.h>
#include<locale.h>


int main()
{
    setlocale(LC_CTYPE, "");
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    if (media >= 6.0) {
        printf("Parabéns! Você foi aprovado com média %.2f", media);
    } else if(media >= 3.0) {
    printf(" Você está de exame com média %.2f", media);}
    else {
        printf("Infelizmente você não passou com média %.2f", media);
    }

    return 0;

}
