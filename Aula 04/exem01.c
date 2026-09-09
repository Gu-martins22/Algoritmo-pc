#include<stdio.h>
#include<locale.h>


int main()
{
    setlocale(LC_CTYPE, "");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2==0 && num % 5==0){
    printf("O número %d é múltiplo de 2 e 5\n", num);
    } else {
    printf("O número %d é ímpar\n", num);
    }

    return 0;
}
