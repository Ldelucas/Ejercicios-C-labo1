#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,par=0;
  for(i=1; i<101; i++)
  {
         if(i%2==0)
                {
                printf("\n%d",i);
                par = par + 1;
                }
                
         //if(i%0)  
         //printf("\n %d \n",i%2);
        // getch();  
  }
  
        printf("\n %d numeros pares desde el 1 al 100",par);
        getch();
  system("PAUSE");	
  return 0;
}
