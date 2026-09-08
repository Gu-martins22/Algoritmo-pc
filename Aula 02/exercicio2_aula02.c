#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float comprimento, largura, perimetro, area;
    printf("Qual o comprimento do jardim (m)?\n ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim (m)?\n ");
    scanf("%f", &largura);

    perimetro = 2*(comprimento+largura);
    area = comprimento*largura;

    printf("O perímetro do jardim é %.2f m\n", perimetro);
    printf("A área do jardim é %.2f m²\n", area);
    return 0;
}
