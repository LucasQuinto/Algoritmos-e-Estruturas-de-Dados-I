#include <stdio.h>
#include <locale.h>

void troca (int * p1, int * p2) {
	
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nInício do Programa ....  \n");
	
	int x = 5, y = 10;
	printf("Antes da troca: x = %d, y = %d\n", x , y);
	
	troca(&x, &y);
	printf("Após da troca: x = %d, y = %d\n", x , y);
	
	printf("\nFim do programa....");
	return 0;
}
