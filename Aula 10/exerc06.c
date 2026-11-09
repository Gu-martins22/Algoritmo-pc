/*
6- O programa deverá armazenar os dados de 3 alunos em um vetor de estruturas. Para cada aluno:
- leia o RGM;
- leia a primeira nota;
- leia a segunda nota;
- calcule a média utilizando a função: void calcular_media(Aluno *aluno);

A função deverá receber o endereço da estrutura correspondente ao aluno e atualizar o campo
media. Depois de cadastrar todos os alunos, o programa deverá solicitar um RGM para consulta
exibir (caso encontrado) o RGM e a média. Caso contrário exibir uma mensagem de erro.
*/

#include<stdio.h>
#include<locale.h>
#define alunes 3

typedef struct
{
    int rgm;
    float nota1, nota2, media;
} Aluno;

float calcular_media(Aluno *alunos)
{
    alunos->media = (alunos->nota1 + alunos->nota2)/2;
}

int main()
{
	setlocale(LC_CTYPE, "");

    Aluno alunos[alunes];
    int i, buscar_rgm;
    int achei = 0;
    char opcao;

    // Cadastro dos alunos
    for(i=0; i<alunes; i++){
        printf("\nCadastro do aluno %d\n", i+1);

        printf("Digite o RGM: ");
        scanf("%d", &alunos[i].rgm);

        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);

        calcular_media(&alunos[i]);
    }

    do{
    // Consulta do RGM
    printf("\nDigite o RGM para consulta: ");
    scanf("%d", &buscar_rgm);

    // Procurar o aluno
    for(i=0; i<alunes; i++){
        if(alunos[i].rgm == buscar_rgm){
            printf("\nAluno encontrado!\n");
            printf("RGM: %d\n", alunos[i].rgm);
            printf("Media: %.2f\n", alunos[i].media);

            achei = 1;
            break;
        }
    }

    if(achei == 0){
        printf("\nErro: RGM nao encontrado!\n");
    }

    printf("\nDeseja consultar a média de outro aluno (s/n)? ");
    scanf(" %c", &opcao);

    }while(opcao == 's' || opcao == 'S');

	return 0;
}
