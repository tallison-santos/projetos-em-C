# include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
struct vacina {
  	char nome [100];
     int quantidade;
     float percentual;
};
  
  
int main() {
   	
   	struct vacina lista[4];
   	int total = 0;
   	int i;
   	
   	for(i = 0; i < 4; i++){
   		printf("digite o nome da vacina: \n");
   		gets(lista[i].nome);
   		
   		printf("digite a quantidade: \n");
   		scanf("%d", lista[i].quantidade);
   		
   		total = total + lista[i].quantidade;
   		
   	
   		
   		for(i = 0; i < 4; i++){
   			lista[i].percentual = (lista[i].quantidade * 100) / total;
   			
		   }
		   
		   for(i = 0; 1 < 4; i++){
		   	printf("nome da vacina %s /n", lista [i].nome);
		   	printf("quantidade %d /n", lista[i].quantidade);
		   	printf("percentual %f /n", lista[i].percentual);
		   	printf("======================================/n");
	}
		   	
}

}
