/* 2- Desenvolva um algoritmo e um programa em C
que leia as notas dos 5 estudantes, calcule a média
da turma e determine a maior nota obtida.

Entrada:
Digite a nota do 1º estudante: 7.0
Digite a nota do 2º estudante: 8.5
Digite a nota do 3º estudante: 6.0
Digite a nota do 4º estudante: 9.0
Digite a nota do 5º estudante: 5.5
Saída:
Média da turma: 7.20
Maior nota: 9.00 */

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int i;
    float nota, media, soma;
    float maior_nota = 0;

    //for(i=1; i<=5; i++) ou
    for(i=0; i<5; i++){
        printf("Digite a nota do %d° aluno: ", (i+1));
        scanf("%f", &nota);
        soma += nota;

        if(nota > maior_nota){
            maior_nota = nota;
        }
    }
    media = soma/5;

    printf("\nMédia da turma: %.2f", media);
    printf("\nMaior nota: %.2f", maior_nota);

    return 0;
}
