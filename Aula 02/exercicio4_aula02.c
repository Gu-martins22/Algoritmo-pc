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
