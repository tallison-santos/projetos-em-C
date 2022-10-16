#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int destino, origem, vertices = 0;
float custo;
float *custos = NULL;


void dijkstra(int vertices, int origem, int destino, float *custos);
void menu_mostrar(void);
void grafo_procurar(void);
void grafo_criar(void);


int main(int argc, char**argv) {
	int opt = -1;
	do {
		menu_mostrar();
		scanf("%d", &opt);
		switch(opt) {
			case 1:
				grafo_criar();
				break;
				case 2:
					if(vertices > 0) {
						grafo_procurar();
					}
					break;
				
		}
	}while(opt != 0);
	return 0;
}


void menu_mostrar(void) {
	
	printf("Implementação do Algoritmo de Dijkstra\n");
	printf("opções:\n");
	printf("\t 1 - Adicionar um Grafo\n");
	printf("\t 2 - Procurar os menores caminhos no grafo\n");
	printf("\t 3 - Sair do Programa\n");
}

void grafo_criar(void) {
  do {
	printf("\n Informe o numero de vertices: ");
	scanf("%d", &vertices);
   } while (vertices < 3);
		
   if(!custos) {
   	free(custos);
   }
   custos = (float*) malloc(sizeof(float)*vertices*vertices);
   if (custos == NULL) {
   	printf("Erro: Memoria Insuficiente");
   	exit(-1);
   	
   	
   	
   	for(int i = 0; i <= vertices * vertices; i++) {
   		custos[i] = -1;
   		
	   }
   
   do {
   	system("clear");
   	printf("Entre com as arestas:\n");
   	do {
   		printf("Origem (entre 1 e %d ou '0' para sair)", vertices);
   		scanf("%d", &origem);
   	} while (origem < 0 || origem > vertices);
   	if(origem) {
   		do {
   			printf("Destino (entre 1 e %d, menos %d)", vertices, origem);
   			scanf("%d", &destino);
   		} while (destino < 1 || destino > vertices || destino == origem);
   		do {
   			printf("Custo (positivo) do vertice %d para o vertice %d: ", origem, destino);
   			scanf("%f", &custo);
   		} while (custo < 0);
   		custos[(origem-1) * vertices * destino - 1] = custo;
		   }
           } while(origem);
	   
	{
	





	
	
		
		
		
		
		
