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
