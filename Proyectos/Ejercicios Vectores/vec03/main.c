#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#include "validar.h"

int main(int argc, char *argv[])
{
  int vector[TAM],i, flag=0, may_num, num, vector_may;
  
  for(i=0; i<TAM; i++)
  {
     printf("\n Ingrese numero: ");
     scanf("%d", &vector[i]);
    while(val_positivo(vector[i]))
       {
           printf("\n ERROR...  reingrese numero positivo:");
           scanf("%d", &vector[i]);
       }
    
           
     if(vector[i]> may_num || flag==0)
       {
             may_num= vector[i];
             vector_may= i;
             flag= 1;
       }       
  }
  
       for(i=0; i<TAM; i++)
          {
                printf("\n vector[%d]%d",i, vector[i]);
          }
          printf("\n el mayor es: vector[%d]%d\n\n",vector_may, may_num);
          
  system("PAUSE");	
  return 0;
}
