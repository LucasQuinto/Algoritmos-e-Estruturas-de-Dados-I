#include <stdio.h>
#include <locale.h>
int func(int,int);
//----------------------------------------
int main() {
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n--- Início do Programa  ---");
	int codretorno, n1, n2, maiorValor;
	
	printf("\n\n--- Entre com um valor inteiro  ---\n");
	scanf("\n%d", &n1);
	
	printf("\n\n--- Entre com outro valor inteiro  ---\n");
	scanf("\n%d", &n2);
	
	maiorValor = func(n1, n2);
	printf("\nMaiorValor = %d", maiorValor);
	
	printf("\n\n--- Fim do Programa  ---");
	return 0;
}
//-----------------------------------------
int func(int n1, int n2) {
	if(n1 > n2)
		return n1;
	else 
		return n2;
}

