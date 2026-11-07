/*
Em clínicas, academias e aplicativos de acompanhamento físico, o Índice de Massa
Corporal (IMC) é utilizado como uma medida inicial para relacionar o peso de uma
pessoa com sua altura.

5- Desenvolva um programa em C que: (i) leia o peso de uma pessoa, em quilogramas, e a altura,
em metros; (ii) calcule o IMC utilizando a fórmula: IMC = peso/altura²; (iii) exiba o IMC com duas
casas decimais.
*/

#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, IMC;

    printf("Qual o peso em kg? ");
    scanf("%f", &peso);
    printf("Qual a altura em metros? ");
    scanf("%f", &altura);

    IMC= peso/(altura*altura);

    printf("O Índice de Massa Corporal é: %.2f kg/m²", IMC);
    return 0;
}
