#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int nota1, nota2;
    double media;
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    media = (nota1+nota2)/2;

    printf("Média aritmética: %.2f", media);
    return 0;
}
