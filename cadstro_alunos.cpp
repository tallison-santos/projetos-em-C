#include <stdio.h>
#include <string.h>

int main(void)
{
   struct ficha_aluno
  {
 
    char nome[40];
    int numero;
    float nota;
 
};
	
	 struct ficha_aluno aluno;
	 
	 printf("--------------------------------------------------cadastro de alunos-----------------------------------------------------\n\n\n");
	 
	 
	 printf("nome do aluno:\n");
	 fflush(stdin);
	 fgets(aluno.nome, 40, stdin);
	 
	 
	 printf("digite o numero do aluno:\n");
	 fflush(stdin);
	 scanf("%d", &aluno.numero);
	 
	 printf("informe a nota do aluno:\n");
	 fflush(stdin);
	 scanf("%f", &aluno.nota);
	 
	 printf("\n\ndados do aluno\n\n");
	 printf("nome.....: %s", aluno.nome);
	 printf("numero.....: %d \n", aluno.numero);
	 printf("nota..... : %.2f \n", aluno.nota);
	 
	 
	 
 

  
	
	
	return(0);
}
