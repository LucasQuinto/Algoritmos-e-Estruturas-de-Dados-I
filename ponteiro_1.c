#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nInício do Programa ....  \n");
	
	int a = 5;
	int * p = NULL;
	
	p = &a;  //o ponteiro p recebe o endereço de a
	
	printf("Conteúdo de a = %d\n", *p); //imprime o conteúdo de a
	
	printf("\nFim do programa....");
	return 0;
}
