#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nIn�cio do Programa ....  \n");
	
	//Defini��o da estrutura heterog�nea
	struct Aluno {
		int codAluno;
		char nomeAluno[50];
	};
	
	//declara��o das vari�veis
	struct Aluno aluno1; //Enrico
	struct Aluno aluno2; //Glenda
	
	//instancia��o dos registros
	aluno1.codAluno = 10;
	strcpy(aluno1.nomeAluno, "Enrico");
	
	aluno2.codAluno = 20;
	strcpy(aluno2.nomeAluno, "Glenda");
	
	//impress�o dos registros
	
	printf("\nDados do Enrico: \n");
	printf("C�digo: %d\n", aluno1.codAluno);
	printf("Nome: %s\n", aluno1.nomeAluno);
	
	printf("-------------------------------");
	printf("\nDados da Glenda: \n");
	printf("C�digo: %d\n", aluno2.codAluno);
	printf("Nome: %s\n", aluno2.nomeAluno);
	
	printf("\nFim do programa....");
	return 0;
}







