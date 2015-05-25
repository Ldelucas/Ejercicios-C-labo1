#include <stdio.h>
#include <stdlib.h>
#include "Validar.h"

int main(int argc, char *argv[])
{
    int i, menor_num=0, numero, flag=0, mayor_num=0, band=0;
    int acum=0;
    float promedio;
    
    for(i=0; i<5; i++)
    {
        printf("\n ingrese un numero:");
        scanf("%d", &numero);
        
        while(Validar(numero))
               {
                         printf("ERROR.. reingrese numero:");
                         scanf("%d", &numero);
               }
        
        
        acum= acum+ numero;
          if(numero< menor_num || flag==0)
            {
                     menor_num= numero;
                     flag= 1;
            }     
            
            
            
            if(numero> mayor_num || band==0)
            {
                     mayor_num= numero;
                     band= 1;
            }     
             
         promedio=  (float)acum/5;   
    }
  
  printf("\n El menor numero es:%d",menor_num);
  printf("\n El mayor numero es:%d",mayor_num);
  printf("\n El promedio es:%.2f \n \n",promedio);

  system("PAUSE");	
  return 0;
}
