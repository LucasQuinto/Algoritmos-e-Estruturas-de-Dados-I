#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nIn�cio do Programa ....  \n");
	
	int a = 5;
	int * p = NULL;
	
	p = &a;  //o ponteiro p recebe o endere�o de a
	
	printf("Conte�do de a = %d\n", *p); //imprime o conte�do de a
	
	printf("\nFim do programa....");
	return 0;
}
