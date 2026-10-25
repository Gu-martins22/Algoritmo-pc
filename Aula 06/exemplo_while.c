#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int i=1, num;
    //(i=1) Significa que a repetição irá começar do 1

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    printf("\nTabuada do %d\n", num);

    while (i<=10){
        printf("%d * %d = %d\n", i, num, (i*num));
        i++; /* Aqui o i++ impede que a repetição seja
                infinita */
        }

    printf("\nAgora terminou!! O i é igual a: %d", i);

    return 0;
}
