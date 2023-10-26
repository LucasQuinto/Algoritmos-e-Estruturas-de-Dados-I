#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nInício do Programa ....  \n");
	
	//Definição da estrutura heterogênea
	struct Produto {
		int codProduto;
		char descProduto[50];
		double precoProduto;
	};
	
	//declaração das variáveis
	struct Produto produto1; //Mouse
	struct Produto produto2; //Placa de Vídeo
	struct Produto produto3; //Placa Mãe
	
	//instanciação dos registros
	produto1.codProduto = 10;
	strcpy(produto1.descProduto, "Mouse Logitech G903");
	produto1.precoProduto = 500.00;
 
	produto2.codProduto = 20;
	strcpy(produto2.descProduto, "Placa de Vídeo RX 3080");
	produto2.precoProduto = 4900.00;
	
	produto3.codProduto = 30;
	strcpy(produto3.descProduto, "Placa Mãe ASUS Rog Strix Z790");
	produto3.precoProduto = 3200.00;
	
	//impressão dos registros
	
	printf("\nDados do Mouse: \n");
	printf("Código: %d\n", produto1.codProduto);
	printf("Nome: %s\n", produto1.descProduto);
	printf("Preço: %.2f\n", produto1.precoProduto);	
	
	printf("\nDados da Placa de Vídeo: \n");
	printf("Código: %d\n", produto2.codProduto);
	printf("Nome: %s\n", produto2.descProduto);
	printf("Preço: %.2f\n", produto2.precoProduto);
	
	printf("\nDados da Placa Mãe: \n");
	printf("Código: %d\n", produto3.codProduto);
	printf("Nome: %s\n", produto3.descProduto);
	printf("Preço: %.2f\n", produto3.precoProduto);		
	
	printf("\nFim do programa....");
	return 0;
}







