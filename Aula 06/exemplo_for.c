#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int i, num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);


    for(i=0; i<=10; i++){
        printf("\n%d * %d = %d", num, i, (num*i));
    }
    /*
    Explicação:
    (i=0)-> A repetição começa do zero;
    (i<=10)-> A repetição irá até o 10;
    (i++)-> A repetição irá de um em um;
    */

    printf("\nAgora terminou!! O i é igual a: %d", i);

    return 0;
}
