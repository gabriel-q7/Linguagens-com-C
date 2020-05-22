/******************************************************************************
    Estruturas de seleção ternária
*******************************************************************************/
#include <stdio.h>

int main()
{
   int n1,n2,maior;
   
   printf("Digite um número:");
   scanf("%d",&n1);
   printf("Digite outro número:");
   scanf("%d",&n2);
   
   if(n1!=n2){
       //variavel = condição ? se for verdadeiro: se for falso;
       maior = n1>n2 ? n1:n2;
       printf("\n O maior é %d",maior);
   }else{
       printf("\n Numeros iguais");
   }

    return 0;
}
