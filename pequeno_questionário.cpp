#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int idade[50];
int serie[50];
char profissao[50];
char nome[50];
char pesquisa[50];
char mundo[50];
char final[50];

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color B");
	printf("\t\t\t\t\t\tPESQUISA DO TALES\t\t\t\t\t\t\t");
	
	printf("\ndigite seu nome e sobrenome:\n");
	scanf("%d", &nome);
	fflush(stdin);
	
	printf("\ndigite a sua idade:\n");
	scanf("i%", &idade);
	fflush(stdin);
	
	
	printf("\nvoçê está em qual serie do ano letivo?\n");
	scanf("%i", &serie);
	fflush(stdin);
	
	printf("\nqual profissão voce deseja para seu futuro?\n");
	scanf("%d", &profissao);
	fflush(stdin);
	
	printf("\nse voçê pudesse mudar alguma coisa no mundo atual, oque seria?\n");
	scanf("%d", &mundo);
	fflush(stdin);
	
	printf("\nobrigado por participar da minha pesquisa, suas resposta serâo mantidas em absoluto sigilo.");
	fflush(stdin);
	return 0;


	
	
}
	




