#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    int matriz[2][3];
    
    printf("Preencha a matriz:\n");
    
    int i,j;
    for (i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
    	}
    }
	  
  	printf("\nMatriz:\n");
   
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

  	int somaLinha = 0; 
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            somaLinha = somaLinha + matriz[i][j];
        }
        printf("Soma dos elementos da linha %d é: %d\n", i, somaLinha);
        somaLinha = 0;
    }
   	
    int soma = 0; 
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma = soma + matriz[i][j];
        }
    }

    printf("\nA soma dos elementos da matriz é: %d\n", soma);

    return 0;
}
