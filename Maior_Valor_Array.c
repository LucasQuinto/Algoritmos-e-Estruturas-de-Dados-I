#include <stdio.h>
#include <locale.h>
int func(int [],int);
//----------------------------------------
int main() {
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n--- Início do Programa  ---\n");
	int codretorno, maiorValorArray;
	int array[3];
	
	printf("\n--- Entre com primeiro valor inteiro  ---\n");
	scanf("\n%d", &array[0]);
	
	printf("\n--- Entre com segundo valor inteiro  ---\n");
	scanf("\n%d", &array[1]);
	
	printf("\n--- Entre com terceiro valor inteiro  ---\n");
	scanf("\n%d", &array[2]);

	maiorValorArray = func(array, 3);
	printf("\nMaior valor do array = %d", maiorValorArray);
	
	printf("\n\n--- Fim do Programa  ---");
	return 0;
}
//-----------------------------------------
int func(int array[], int tamanho) {
	int i = 0, maior = array[0];
	for (i = 1 ; i < tamanho; i++)
		if (array[i] > maior)
			maior = array[i];
	return maior;
}









