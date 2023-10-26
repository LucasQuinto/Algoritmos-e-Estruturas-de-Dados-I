#include <stdio.h>
#include <locale.h>
int soma(int,int);
//----------------------------------------
int main() {
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n--- Início do Programa  ---");
	int codretorno, n1, n2, valorSoma;
	
	printf("\n\n--- Entre com um valor inteiro  ---\n");
	scanf("\n%d", &n1);
	
	printf("\n\n--- Entre com outro valor inteiro  ---\n");
	scanf("\n%d", &n2);
	
	valorSoma = soma(n1, n2);
	printf("\nSoma = %d", valorSoma);
	
	printf("\n\n--- Fim do Programa  ---");
	return 0;
}
//-----------------------------------------
int soma(int n1, int n2) {
	return(n1 + n2);
}

