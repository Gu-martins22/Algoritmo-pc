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
