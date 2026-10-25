/*
3- Ao final de uma avaliação, um professor deseja obter rapidamente a quantidade de estudantes que
alcançaram a média mínima estabelecida para aprovação. Considere que a turma possui 10 alunos e
que uma nota igual ou superior a 6.0 é considerada suficiente para aprovação. Desenvolva um
programa em C que leia a nota dos 10 alunos e apresente a quantidade de estudantes que obtiveram
nota igual ou superior a 6.0.
Utilize a estrutura de repetição que considerar mais adequada.
*/
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
    int i, alunos;
    float nota;

    for(i=1; i<=10; i++){
        printf("Nota do %d° aluno: ", i);
        scanf("%f", &nota);

        if(nota<0 || nota>10){
            printf("Nota Inválida!\n");
            break;
        }
        else if(nota>=6){
            alunos ++;
        }
    }
    printf("\nAlunos aprovados: %d", alunos);

	return 0;
}
