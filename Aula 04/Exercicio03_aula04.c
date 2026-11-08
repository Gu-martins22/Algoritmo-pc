/*
Além do desempenho nas avaliações, algumas instituições de ensino também consideram
a frequência mínima do estudante para determinar sua aprovação em uma disciplina.

3- Desenvolva um algoritmo e um programa e C que leia a média final e o percentual de frequência
de um aluno e informe sua situação acadêmica de acordo com as seguintes regras: frequência
inferior a 75% → Reprovado por falta; frequência maior ou igual a 75% e média inferior a 6,0 → Reprovado por nota; 
nos demais casos → Aprovado.
*/

#include<stdio.h>
#include<locale.h>


int main()
{
    setlocale(LC_CTYPE, "");
    float media, frequencia;

    printf("Qual a média final do aluno? ");
    scanf("%f", &media);
    printf("Qual o percentual de frequência? ");
    scanf("%f", &frequencia);

    if(frequencia < 75){
        printf("Reprovado por falta!!\n");
    } else if (media < 6){
        printf("Reprovado por nota!\n");
    } else {
    printf("Aprovado!!!");}

return 0;
}
