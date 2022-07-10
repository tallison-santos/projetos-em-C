#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


  int vjoao = 0, vMaria = 0, vZe = 0, vVotoNulo = 0, vInvalido = 0; 
  int pZureta = 0, pGomes = 0, pVotoNulo = 0, pInvalido = 0;
	

  int main() {
	 
	setlocale(LC_ALL, "portuguese");
	int opcao_menu = 0;
	int opcao_vereador = 0, opcao_prefeito = 0;
	
	system("@cls||clear");
	printf("------MENU------ \n");
	printf(" 1 - VOTO \n");
	printf(" 2 - APURAR OS VOTOS \n");
	printf(" 3 - SAIR \n");
	printf("-------------------- \n");
	printf("-->");
	scanf("%i", &opcao_menu);
	fflush(stdin);
	
	switch (opcao_menu)
	{
	case 1:
		system("@cls||clear");
		printf("--------------VOTAÇÃO VEREADOR----------\n");
		printf("111 - para vereador Joao do frete\n");
		printf("222 - para vereador Maria da pamonha\n");
		printf("333 - para vereador Ze da farmacia\n");
	     printf("444 - para Voto Nulo\n");
	     printf("----------------\n");
	     printf("-->");
	     scanf("%i", &opcao_vereador);
	     fflush(stdin);
	     switch (opcao_vereador)
		{
	         case 111:
			   printf("voto confirmado em vereador joao do frete\n");
			   vjoao = vjoao + 1; 
			   break;
	    	    case 222:
			   printf("voto confirmado em vereador Maria da pamonha\n");
			   vMaria = vMaria +1;
			   break;
		    case 333:
			   printf("voto confirmado em vereador Ze da farmacia\n");
			   vZe = vZe + 1;
		  	   break;
	 	    case 444:
			  printf("Voto Nulo\n");
			  vVotoNulo = vVotoNulo + 1;
			  break;
		    deafault:
			    printf("voto invalido");
			    vInvalido = vInvalido +1;
			    break;
          }
          printf("pressione enter para continuar...");
          system("pause");
          
          system("@cls||clear");
		printf("-------VOTAÇÃO--PREFEITO--------\n");
		printf("11 - para prefeito dr.Zuret\n");
		printf("22 - para prefeito senhor Gomes\n");
	     printf("33 - para Voto Nulo\n");
	     printf("----------------\n");
	     printf("-->");
	     scanf("%i", &opcao_prefeito);
	     fflush(stdin);
	     switch(opcao_prefeito)
		{
	        case 11:
	        	  printf("voto confirmado em prefeito Zureta\n");
	        	  pZureta =pZureta + 1;
		       break;	
		
		   case 22:
		   	  printf("voto confirmado em prefeito Gomes\n");
		   	  pGomes = pGomes + 1;
		       break;

		   case 33:
		   	  printf("Voto Nulo\n");
		   	  pVotoNulo = pVotoNulo + 1;
		    	  break;

		   default:
		   	  printf("voto invalido\n");
		   	  pInvalido = pInvalido + 1;
		   	  break;
		}
		printf("pressione enter para continuar...");
          system("pause");
          main();
     break;
          
     case 2:
          system("@cls||clear");	
          printf("-------APURAÇÃO DE VOTOS--------\n");
          printf("---------VEREADORES---------\n");
          printf("vereador 111: %d votos.\n", vjoao);
          printf("vereador 222: %d votos.\n", vMaria);
          printf("vereador 333: %d votos.\n", vZe);
          printf("vereador 444: %d votos.\n", vVotoNulo);
          printf("Votos Invalidos: %d votos.\n", pInvalido);
          printf("-------PREFEITOS---------\n");
          printf("vereador 11: %d votos.\n", pZureta);
          printf("vereador 22: %d votos.\n", pGomes);
          printf("vereador 33: %d votos.\n", vVotoNulo);
          printf("vereador 44: %d votos.\n", vInvalido);
          printf("----------------------------\n");
          printf("pressione enter para voltar ao menu...");
          system("pause");
          main();
          break;
          
          case 3:
              printf("sessão encerrada!");
              break;
          default:
          	break;
          	
    }
}




	
	
	
	
	
	
	

