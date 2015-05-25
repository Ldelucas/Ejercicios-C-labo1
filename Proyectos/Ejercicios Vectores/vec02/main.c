#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include "Validar.h"


int main(int argc, char *argv[])
{
    int vect[TAM], i,carga, pos;
    
   
                
    for(i=0; i<TAM; i++)
       {
          printf("\n ingrese posicion de carga:");   
          scanf("%d", &pos);
          while(validar_pos(pos,TAM))
             {
               printf("\n ERROR... Reingrese posicion de carga:");   
               scanf("%d", &pos);
               fflush(stdin);
        
             }
    printf("\n ingrese carga:");   
          scanf("%d", &carga);
          
          vect[pos-1]=carga;
          /*if(pos==i)
          {
            vect[i]=carga;        
          }*/
          
       } 
      for(i=0; i<TAM; i++)
       {
               printf("\n VECTOR[%d] %d",i+1, vect[i]);   
          
       }
  system("PAUSE");	
  return 0;
}
