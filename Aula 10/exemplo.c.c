#include<stdio.h>
#include<locale.h>

float calcular_area (float base, float altura)
{
    return base * altura;
}

int main ()
{
    setlocale(LC_CTYPE, "");
    float base, altura, area;

    base = 5;
    altura = 6;
    area = base*altura;

    printf("A área do retangulo é: %.1f cm²\n", area);

    base = 8;
    altura = 7.8;
    area = base*altura;

    printf("A área do retangulo é: %.1f cm²\n", calcular_area(base, altura));
    printf("A área do retangulo é: %.1f cm²\n", calcular_area(9, 7.8));
    printf("A área do retangulo é: %.1f cm²\n", calcular_area(8, 6));
    printf("A área do retangulo é: %.1f cm²\n", calcular_area(10, 12));

    return 0;
}
