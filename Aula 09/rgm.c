#include<stdio.h>
#include<locale.h>

int main ()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    char rgm[12];
    int i, num;
    float nota;

    arquivo = fopen("notas.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite a quantidade de registros: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("\nRGM: ");
        scanf("%s", rgm);
        printf("Nota: ");
        scanf("%f", &nota);
        fprintf(arquivo, "%s %.1f\n", rgm, nota);
    }

    printf("\nArquivo criado com sucesso!\n");

    fclose(arquivo);

    return 0;
}
