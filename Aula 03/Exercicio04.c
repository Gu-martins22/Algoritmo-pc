#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    int potencia, horas;
    float consumo;

    printf("Potência do equipamento (W)? ");
    scanf("%d", &potencia);
    printf("Horas de uso por dia? ");
    scanf("%d", &horas);

    consumo=(float)(potencia*horas*30)/1000;

    printf("Consumo mensal: %.2f kwh", consumo);

    return 0;
}
