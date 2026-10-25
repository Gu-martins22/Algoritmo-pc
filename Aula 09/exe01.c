#include<stdio.h>
#include<locale.h>

int main ()
{
    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i, num;

    arquivo = fopen("tabuada.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "\nTabuada do %d\n", num); // acrescenta um f+arquivo para gravar no arquivo
    for(i=0; i<11; i++){
        fprintf(arquivo, "%d * %d = %d\n", num, i, (num*i)); // acrescenta um f+arquivo para gravar no arquivo
    }

    printf("\nArquivo criado com sucesso!\n");

    fclose(arquivo);


    return 0;
}
