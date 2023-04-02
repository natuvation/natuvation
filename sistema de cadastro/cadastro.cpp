#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

void cNome(char nome[100]);
void cEmail(char email[100]);
void cCelular(char celular[11]);
void cSenha(char senha[20]);

main()
{
 setlocale(LC_ALL, "Portuguese");
	char nome[100], email[100], celular[11], senha[20];
	
	printf("Bem vindo ao NatuVation\nCadastro\n");
	printf("Nome: ");
	scanf(" %[^\n]",&nome);
	printf("E-mail: ");
	scanf(" %[^\n]",&email);
	printf("Celular: ");
	scanf(" %[^\n]",&celular);
	printf("Senha: ");
	scanf(" %[^\n]",&senha);
	
	printf("\n");
	cNome(nome);
	cEmail(email);
	cCelular(celular);
	cSenha(senha);
	
	printf("\n\n\tAperte enter para confirmar cadastro");
}

void cNome(char nome[100]){
	printf("\nNome digitado: %s",nome);
}

void cEmail(char email[100]){
	printf("\nE-mail digitado: %s",email);
}

void cCelular(char celular[11]){
	printf("\nCelular digitado: %s",celular);
}

void cSenha(char senha[20]){
	printf("\nSenha digitada: %s",senha);
}
