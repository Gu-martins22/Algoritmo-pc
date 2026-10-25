//4- Desenvolva um algoritmo e um programa
//em C que inicialmente leia a quantidade de
//alunos da turma. Para cada estudante, solicite
//sua nota. Caso seja informado um valor
//menor que 0 ou maior que 10, o programa
//deverá solicitar uma nova nota e somente
//prosseguir quando um valor válido for
//fornecido. Ao final, calcule e apresente a
//média da turma.

//Entrada:
//Quantidade de alunos: 3
//Nota 1: 8.0
//Nota 2: 12.0
//Nota inválida!
//Digite novamente: 7.0
//Nota 3: 6.0
//Saída:
//Média da turma: 7.00

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float nota, media, soma;
    int i;

    printf("Quantidade de alunos: 3");

    for(i=0; i<3; i++){
    do{
        printf("\nDigite a nota do aluno (0-10): ");
        scanf("%f", &nota);

        if (nota<0 || nota>10){
            printf("Nota inválida!! Tente outra vez!!\n");
        }
        else {
            soma += nota;
        }

    } while (nota<0 || nota>10);
    }

    media = soma/i;
    printf("\nMédia da turma: %.2f", media);

    return 0;
}

