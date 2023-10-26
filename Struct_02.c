#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nIn�cio do Programa ....  \n");
	
	//Defini��o da estrutura heterog�nea
	struct Produto {
		int codProduto;
		char descProduto[50];
		double precoProduto;
	};
	
	//declara��o das vari�veis
	struct Produto produto1; //Mouse
	struct Produto produto2; //Placa de V�deo
	struct Produto produto3; //Placa M�e
	
	//instancia��o dos registros
	produto1.codProduto = 10;
	strcpy(produto1.descProduto, "Mouse Logitech G903");
	produto1.precoProduto = 500.00;
 
	produto2.codProduto = 20;
	strcpy(produto2.descProduto, "Placa de V�deo RX 3080");
	produto2.precoProduto = 4900.00;
	
	produto3.codProduto = 30;
	strcpy(produto3.descProduto, "Placa M�e ASUS Rog Strix Z790");
	produto3.precoProduto = 3200.00;
	
	//impress�o dos registros
	
	printf("\nDados do Mouse: \n");
	printf("C�digo: %d\n", produto1.codProduto);
	printf("Nome: %s\n", produto1.descProduto);
	printf("Pre�o: %.2f\n", produto1.precoProduto);	
	
	printf("\nDados da Placa de V�deo: \n");
	printf("C�digo: %d\n", produto2.codProduto);
	printf("Nome: %s\n", produto2.descProduto);
	printf("Pre�o: %.2f\n", produto2.precoProduto);
	
	printf("\nDados da Placa M�e: \n");
	printf("C�digo: %d\n", produto3.codProduto);
	printf("Nome: %s\n", produto3.descProduto);
	printf("Pre�o: %.2f\n", produto3.precoProduto);		
	
	printf("\nFim do programa....");
	return 0;
}







