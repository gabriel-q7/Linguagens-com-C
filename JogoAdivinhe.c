// Jogo Advinhe o numero sorteado 22/05/2020

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int chute, numero;
    srand(time(NULL));
    numero = 1+rand()%10;
    
    printf("\n Qual foi o número sorteado? (entre 1 a 10)");
    printf("\n Digite o seu chute: ");
    scanf("%d",&chute);
    
    if(chute==numero){
        printf("\n Voce acertou de primeria!");
        printf("\n O numero sorteado foi %d.",chute);
    }else{
        while(chute!=numero){
            
            if(chute>numero){
                printf(" O chute foi maior que o numero sorteado...");
            }else{
                printf(" O chute foi menor que o numero sorteado...");
            }
            
            printf("\n Digite o seu chute: ");
            scanf("%d",&chute);
        }
        printf("\n Voce acertou!");
        printf("\n O numero sorteado foi %d.",chute);
    }
    
    return 0;
}