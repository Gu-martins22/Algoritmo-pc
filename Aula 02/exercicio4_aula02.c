/*
Em uma Unidade Básica de Saúde, uma equipe deseja estimar o consumo diário de água
de um paciente. Para uma orientação inicial, considera-se a recomendação de 35 ml de
água por quilograma de massa corporal.

4- Elabore um algoritmo e um programa em C que leia a massa corporal de uma pessoa, em
quilogramas, e exiba a quantidade aproximada de água recomendada por dia em litros.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int massa;
    float quantidade;
    printf("Digite a massa corporal (em kg): ");
    scanf("%d", &massa);

    quantidade = massa*0.035;

    printf("Quantidade aproximada de água recomendada por dia: %.2f litros", quantidade);
    return 0;
}
