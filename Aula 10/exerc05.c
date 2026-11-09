/*
Um sistema acadêmico precisa armazenar o RGM e duas notas de um estudante e
calcular sua média.

5- Crie uma estrutura Aluno contendo:

- rgm
- nota1
- nota2
- media

Implemente: void calcular_media(Aluno *aluno);

A função deverá atualizar o campo media.
*/

#include<stdio.h>
#include<locale.h>

typedef struct
    {
        int rgm;
        float nota1, nota2, media;
    } Aluno;

    float calcular_media(Aluno *aluno)
    {
        aluno->media = (aluno->nota1 + aluno->nota2)/2;
    }

int main ()
{
    setlocale(LC_CTYPE, "");

    Aluno aluno1;
    printf("Digite o RGM: ");
    scanf("%d", &aluno1.rgm);

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno1.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno1.nota2);

    calcular_media(&aluno1);
    printf("\nRGM: %d\n", aluno1.rgm);
    printf("Média: %.2f\n", aluno1.media);

    return 0;
}

// 290530
