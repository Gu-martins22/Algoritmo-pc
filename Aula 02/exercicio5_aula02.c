/*
Em um sistema acadêmico, as notas das avaliações são armazenadas com valores reais,
permitindo registrar frações de ponto. Para apresentar o desempenho parcial do
estudante, é necessário calcular a média aritmética das duas avaliações realizadas.

5- Elabore um algoritmo e um programa em linguagem C que leia as duas notas de um aluno e exiba
sua média aritmética, apresentando o resultado com duas casas decimais.
*/

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
