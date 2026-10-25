/*
1- Durante a análise de um conjunto de dados numéricos, é necessário identificar algumas
características básicas dos valores registrados, como a quantidade de valores positivos e negativos e
o maior valor encontrado.
Desenvolva um programa em C que leia inicialmente a quantidade de valores que será analisada e,
em seguida, leia os respectivos números reais. Ao final, o programa deverá apresentar:
▪ quantidade de valores positivos;
▪ quantidade de valores negativos;
▪ maior valor informado.
Considere o valor 0 como neutro, não devendo ser contabilizado como positivo nem negativo. Utilize
a estrutura de repetição que considerar mais adequada.
*/
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE, "");
	int n, i;
	int positivo=0, negativo=0;
	float valor, maior;

	printf("Digite a quantidade de valores que serão analisados: ");
	scanf("%d", &n);

	if (n <= 0) {
        printf("A quantidade de valores deve ser maior que zero.\n");
        return 0;
    }

	for(i=0; i<n; i++){
        printf("Digite o valor %d: ",(i+1));
        scanf("%f", &valor);

        if(i==0 || valor > maior){
            maior = valor;
        }

        if (valor > 0){
            positivo +=1;
        }
        else if (valor < 0){
            negativo +=1;
        }

	}

	printf("\nQuantidade de valores positivos: %d\n", positivo);
    printf("\nQuantidade de valores negativos: %d\n", negativo);
    printf("\nMaior valor informado: %.2f\n", maior);

	return 0;
}
