#include <stdio.h>
#include <locale.h>
int fibonacci(int);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nInício do Programa ....  \n");
	
	int n = 10;

	printf("\nFibonacci de %d = %d\n", n , fibonacci(n));
	
	printf("\nFim do programa....");
	return 0;
}
int fibonacci(int n) {
	printf("\nFunção Fibonacci chamada para n = %d", n);
	if (n <= 1 )
		return n;
	else
		return (fibonacci(n-1) + fibonacci(n-2)); 
}







