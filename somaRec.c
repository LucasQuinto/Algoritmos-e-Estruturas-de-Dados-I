#include <stdio.h>
#include <locale.h>
int somaRec(int[], int);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nInício do Programa ....  \n");
	
	int tab[5], i;
	for(i=0; i < 5; i++)
		tab[i] = i;

	printf("\nSoma dos elementos = %d\n", somaRec(tab,5));
	
	printf("\nFim do programa....");
	return 0;
}
int somaRec(int A[], int n) {
	printf("\nFunção executada para n = %d", n);
	if (n == 0 )
		return A[0];
	else
		return somaRec(A,n-1) + A[n-1];
}







