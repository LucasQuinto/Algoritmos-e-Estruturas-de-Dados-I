#include <stdio.h>
#include <locale.h>
int func(int [],int);
//----------------------------------------
int main() {
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n--- Início do Programa  ---\n");
	int codretorno, somaArray;
	int array[3];
	
	printf("\n--- Entre com primeiro valor inteiro  ---\n");
	scanf("\n%d", &array[0]);
	
	printf("\n--- Entre com segundo valor inteiro  ---\n");
	scanf("\n%d", &array[1]);
	
	printf("\n--- Entre com terceiro valor inteiro  ---\n");
	scanf("\n%d", &array[2]);

	somaArray = func(array, 3);
	printf("\nSoma dos elementos do array = %d", somaArray);
	
	printf("\n\n--- Fim do Programa  ---");
	return 0;
}
//-----------------------------------------
int func(int array[], int tamanho) {
	int i = 0, soma = 0;
	for (i = 0 ; i < tamanho; i++)
		soma = soma + array[i];
	return soma;
}









