/*
O Índice de Massa Corporal (IMC) é uma medida calculada a partir do peso e da altura
de uma pessoa e pode ser utilizada como referência para classificar diferentes faixas de
peso.

4- Desenvolva um programa em C que leia o peso, em quilogramas, e a altura, em metros, de uma
pessoa. Calcule seu Índice de Massa Corporal utilizando a fórmula: IMC = peso / altura². Em
seguida, determine a categoria correspondente ao IMC calculado, de acordo com a tabela fornecida,
e exiba uma mensagem no formato: Você está na categoria <categoria>, conforme a tabela:

  Categoria              IMC
Abaixo do peso --> Abaixo de 20,0
Peso normal --> Entre 20,0 e 24,9
Sobrepeso --> Entre 25,0 e 29,9
Obeso --> Entre 30,0 e 39,9
Obeso --> mórbido 40,0 e acima
*/

#include<stdio.h>
#include<locale.h>


int main()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, imc;

    printf("Qual seu peso? ");
    scanf("%f", &peso);
    printf("Qual sua altura? ");
    scanf("%f", &altura);

    imc= peso/(altura*altura);

    if(imc < 20) {
        printf("Você está Abaixo do peso!\n imc= %.2f", imc);
    } else if (imc < 25){
        printf("Você está com Peso normal!\n imc= %.2f", imc);
    } else if (imc < 30){
        printf("Você está com Sobrepeso!\n imc= %.2f", imc);
    } else if (imc < 40){
        printf("Você está Obeso!\n imc= %.2f", imc);
    } else {
        printf("Você está Obeso Mórbido!\n imc= %.2f", imc);
    }

return 0;
}
