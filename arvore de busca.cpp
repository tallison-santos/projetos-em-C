#include <stdlib.h>
#include <stdio.h>
   
NoArv* buscar_versao_2(NoArv *raiz, int num){
    while(raiz){
        if(num < raiz->valor)
            raiz = raiz->esquerda;
        else if(num > raiz->valor)
            raiz = raiz->direita;
        else
            return raiz;
    }
    return NULL;
}
