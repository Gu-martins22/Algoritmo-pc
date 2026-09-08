#include<stdio.h>
#include<locale.h>>

int main ()
{
    setlocale(LC_CTYPE, "");
    int manha, tarde, total;

    printf("Quantidade recebida pela manhã: ");
    scanf("%d", &manha);
    printf("Quantidade recebida à tarde: ");
    scanf("%d", &tarde);

    total = manha + tarde;

    printf("Total de produtos recebidos no dia: %d", total);

    return 0;
}
