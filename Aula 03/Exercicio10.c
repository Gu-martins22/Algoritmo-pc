/*
Em jogos digitais, simuladores e aplicações de física, a distância horizontal percorrida por
um objeto lançado depende da velocidade inicial, do ângulo do lançamento e da
aceleração da gravidade. Esse cálculo pode ser usado para determinar o alcance de uma
bola, projétil ou personagem.

10- Desenvolva um programa em C que: (i) leia a velocidade inicial do lançamento, em metros por
segundo, o ângulo de lançamento, em graus; (ii) converta o ângulo para radianos; (iii) calcule e exiba
o alcance horizontal com duas casas decimais. 
*/

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
