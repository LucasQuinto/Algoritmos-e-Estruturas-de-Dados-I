#include <stdio.h>
#include <locale.h>
int fatorial(int);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nInício do Programa ....  \n");
	
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("\nO fatorial de %d é: %d\n", num, fatorial(num));
	
	printf("\nFim do programa....");
	return 0;
}
int fatorial(int n) {
	printf("\nFunção Fatorial executada para n = %d", n);
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fatorial(n-1);
}







