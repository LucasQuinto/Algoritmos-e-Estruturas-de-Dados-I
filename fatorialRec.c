#include <stdio.h>
#include <locale.h>
int fatorial(int);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nIn�cio do Programa ....  \n");
	
	int num;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	printf("\nO fatorial de %d �: %d\n", num, fatorial(num));
	
	printf("\nFim do programa....");
	return 0;
}
int fatorial(int n) {
	printf("\nFun��o Fatorial executada para n = %d", n);
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fatorial(n-1);
}







