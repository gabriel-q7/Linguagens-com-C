/******************************************************************************
   Programa para geração de um resultado aleatório no jogo jokenpo.
*******************************************************************************/

#include "stdlib.h"  //necessário para rand() srand()
#include "stdio.h"   //necessário para printf()
#include "time.h"    //necessário para time()
#include "string.h"  //necessário para strcpy()

int main(void)
{
    srand(time(NULL));
    int numero = rand()%3;
    char resultado[10];
    
    
    if(numero==0){
        strcpy(resultado,"Tesoura");
    }
    
    if(numero==1){
        strcpy(resultado,"Papel");
    }
    
    if(numero==2){
       strcpy(resultado,"Pedra");
    }
    
    
    printf("%s",resultado);
    
    return 0;
}
