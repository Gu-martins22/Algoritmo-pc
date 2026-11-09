/*
Durante determinados processamentos, um programa precisa reorganizar valores. Uma
operação fundamental consiste em trocar o conteúdo de duas variáveis.

2- Crie a função que receba os dois
valores e troque seus conteúdos.

Caso de teste
Entrada:
Digite o valor de a: 10
Digite o valor de b: 20
Saída:
Antes: a=10 b=20
Depois: a= 20 b=10
*/

#include<stdio.h>
#include<locale.h>

void trocar(int *a, int *b)
{
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main ()
{
    setlocale(LC_CTYPE, "");
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nAntes:\na = %d\n", a);
    printf("b = %d\n", b);

    trocar(&a, &b); // precisa do '&' para funções com ponteiro(*)
    printf("\nDepois:\na = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
