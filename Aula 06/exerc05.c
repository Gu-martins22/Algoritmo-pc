/* 5- Desenvolva um algoritmo e um programa em C
que solicite o número da conta e a senha do
cliente. Considere como credenciais válidas a
conta 12345 e a senha 123. O usuário poderá
realizar no máximo três tentativas. O programa
deverá encerrar imediatamente quando as
credenciais corretas forem fornecidas ou bloquear
o acesso após a terceira tentativa incorreta. Utilize
do...while.

    Entrada:
Conta: 12345
Senha: 111
Conta: 12345
Senha: 222
Conta: 12345
Senha: 123
Saída:
Acesso autorizado. */

#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int conta = 12345;
    int senha = 123;
    int tentativas = 3, user, pass;

    while(1) { //Como padrão, o 'zero' é considerado falso e o 'um' é considerado verdadeiro
        printf("\nConta: ");
        scanf("%d", &user);
        printf("Senha: ");
        scanf("%d", &pass);

        if (user == conta && pass == senha){
            printf("\nLogado!");
            break;
        }
        else if (tentativas > 0){
            printf("\nDados incorretos!\n");
            tentativas = tentativas - 1; //ou tentativas -= 1
            printf("Você tem %d tentativas!\n", tentativas);
        }
        else {
            printf("\nUsuário bloqueado!");
            break;
        }
    }

    return 0;
}

//senha: 660792
