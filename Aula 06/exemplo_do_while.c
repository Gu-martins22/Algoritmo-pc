#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    int i=1, num;


    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    printf("\nTabuada do %d", num);

    do{
        printf("\n%d * %d = %d", num, i, (num*i));
        i++;
    } while(i<=10);

    return 0;
}
