/******************************************************************************
   Programa do jogo jokenpo versão 2
   21/02/2020
*******************************************************************************/

#include "stdlib.h"  //necessário para rand() srand()
#include "stdio.h"   //necessário para printf()
#include "time.h"    //necessário para time()

int main(void)
{
    int jogador,pc;
    
    printf("\n __--* Bem-vindo ao jokenpo! *--__");
    printf("\n Voce jogara contra o computador...\n");
    printf("\n 1:Tesoura 2:Papel 3:Pedra");
    printf("\n Qual a sua escolha? ");
    scanf("%d",&jogador);
    
    
    srand(time(NULL));
    pc = 1 + rand()%3;
    
    
    if(jogador<1 || jogador>3){
        printf("\n Jogada invalida! Leia as regras e tente de novo.");
        
    }else{
        printf("\n O computador jogou: %d, entao...",pc);
        
        if(jogador==pc){
            printf("\n Empate!");
        }
        
        
        if(jogador==1 && pc==2){
            printf("\n Voce ganhou! Pura sorte ");
        }
        
        if(jogador==1 && pc==3){
            printf("\n Voce perdeu... Quem sabe na proxima");
        }
        
        if(jogador==2 && pc==1){
            printf("\n Voce perdeu... Quem sabe na proxima");
        }
        
        if(jogador==2 && pc==3){
            printf("\n Voce ganhou! Pura sorte ");
        }
        
        if(jogador==3 && pc==1){
            printf("\n Voce ganhou! Pura sorte ");
        }
        
        if(jogador==3 && pc==2){
            printf("\n Voce perdeu... Quem sabe na proxima");
        }
        
        printf("\n Fim do jogo.");
    }
    
    return 0;
}
