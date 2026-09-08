#include<stdio.h>
#include<locale.h>>
#include<math.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    float velocidade, angulo, alcance, gravidade, radi;

    printf("Qual a velocidade inicial (m/s)? ");
    scanf("%f", &velocidade);
    printf("Qual o ângulo de lançamento em graus? ");
    scanf("%f", &angulo);

    gravidade=9.8;
    radi= (angulo*3.14)/180;
    alcance=pow(velocidade, 2)* sin(2*radi)/gravidade;

    printf("O alcance horizontal estimado é: %.2f m", alcance);
    return 0;
}
