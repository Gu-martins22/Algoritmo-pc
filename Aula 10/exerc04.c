/*
Uma empresa de climatização precisa calcular frequentemente a área de ambientes
retangulares para estimar a quantidade de piso necessária. Como esse cálculo será
reutilizado diversas vezes, decidiu-se implementá-lo em uma função.

4- Desenvolva um programa em C que:
- leia a largura (em metros);
- leia o comprimento (em metros);
- utilize uma função calcularArea() para calcular a área;
- exiba o resultado;
- permita calcular quantas áreas o usuário precisar.
*/

#include<stdio.h>
#include<locale.h>

float calcular_area(float largura, float comprimento)
{
    return largura*comprimento;
}

void exibir_resultado(float largura, float comprimento)
{
    float area = calcular_area(largura, comprimento);
    printf("\nÁrea: %.2f m²\n ", area);
}


int main ()
{
    setlocale(LC_CTYPE, "");
    float largura, comprimento;
    char opcao;

    while(1) {
    printf("Digite a largura (m): ");
    scanf("%f", &largura);

    printf("Digite o comprimento (m): ");
    scanf("%f", &comprimento);

    exibir_resultado(largura, comprimento);

    printf("Deseja digitar notas de outro aluno (s/n)? ");
    scanf(" %c", &opcao);

    if(opcao == 'n' || opcao == 'N')
        break;
    }

    return 0;
}
