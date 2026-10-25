/*
A coordenação do curso de letras recebeu um arquivo com o RGM e a nota final dos
estudantes.

4- Desenvolva um algoritmo e um
programa em C que abra o arquivo
notas.txt e determine:
- quantidade de estudantes;
- média da turma;
- maior nota;
- quantidade de alunos aprovados
(nota >= a 6,0).
*/

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    char rgm[12];
    int i, num;
    float nota;
    float soma=0, media, maior_nota;
    int contador=0, aprovados=0;
    FILE *arquivo = fopen("notas.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    while(fscanf(arquivo, "%9s %f", rgm, &nota) != EOF){
        soma += nota;
        contador++;
        if(nota > maior_nota)
            maior_nota = nota;

        if(nota >= 6.0)
            aprovados++;
    }
    media= soma/contador;

    printf("Estudantes: %d\n", contador);
    printf("Média da turma: %.1f\n", media);
    printf("Maior nota: %.1f\n", maior_nota);
    printf("Alunos aprovados: %d\n", aprovados);

    return 0;
}
