/*
Uma escola precisa de um sistema que auxilie os professores a calcular a média de notas
dos alunos e determinar automaticamente se cada aluno está aprovado ou reprovado.
Para ser aprovado, o aluno deve ter uma média igual ou superior a 7.

3- Desenvolva um programa em C que
solicite duas notas de um aluno, calcule a
média e informe o resultado, utilizando
funções. Permita que o programa seja
executado enquanto o usuário possuir notas
a serem digitada!
*/

#include<stdio.h>
#include<locale.h>

float calcular_media(float nota1, float nota2)
{
    return (nota1+nota2)/2;
}

void exibir_resultado(float nota1, float nota2)
{
    float media = calcular_media(nota1, nota2);
    printf("\nMédia do aluno: %.2f\n", media);

    if (media >= 7){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado!\n");
    }

}

int main ()
{
    setlocale(LC_CTYPE, "");
    float nota1, nota2;
    char opcao;

    while(1) {
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    exibir_resultado(nota1, nota2);

    printf("Deseja digitar notas de outro aluno (s/n)? ");
    scanf(" %c", &opcao);

    if(opcao == 'n' || opcao == 'N')
        break;
    }

    return 0;
}
