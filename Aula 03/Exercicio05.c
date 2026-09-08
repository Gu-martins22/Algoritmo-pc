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
