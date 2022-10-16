#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

    int main() {

    int idade;

    printf("\n\t\t\t\t Ola usuario seja bem-vindo!");

    printf("\nUsuario digite sua idade por favor (em anos) : \t");
        scanf("%d", &idade);

    if (idade > 0 && idade <= 30){
            printf("Voce e jovem!");
    }

    if (idade > 30 && idade <= 59 ) {
            printf("Voce esta na meia-idade!");
    }

    if (idade > 59 && idade <= 110) {
            printf("Voce eh um idoso!");
    }

    if (idade > 110)
            printf("Como voce ainda ta vivo carai!?");

        
        return 0;
   }


    
