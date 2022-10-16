#include<stdio.h> 
   //Inclusão da Biblioteca para entrada e saída de dados
main()                    //Inicio da função principal main
{
    int peso=0;            //se imc<18 abaixo do peso. Entre 18 e 25 sarado. Entre 26 e 30 acima. > que 30 obeso.
    float imc=0,altura=0;
    
    printf("**ESTE PROGRAMA ANALISA SEU IMC (Indice de Massa Corporea)**\n\nDigite sua peso: ");
    scanf("%d",&peso);
    printf("Qual sua altura? ");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    if (imc<18) printf("Voce esta abaixo do peso.\n\n");
    else if (imc<=25) printf("Parabens. Voce esta sarado.\n\n");
    else if (imc<=30) printf("Atencao. Voce esta acima do peso.\n\n");
    else  printf("Voce e OBESO. Trate-se imediatamente.\n\n");
    
    getch();    //Dá uma pausa no sistema. Pode ser trocado por system("pause");
    
}
