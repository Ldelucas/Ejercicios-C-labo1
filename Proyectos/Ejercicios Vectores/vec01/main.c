#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, vector[10];
    
    for(i=0; i<10; i++)
       {
          printf("\n ingrese numero");
          scanf("%d", &vector[i]);
          
         
       }  
          system("cls");
          for(i=0; i<10; i++)
            {
              printf("\n VECTOR %d",vector[i]);
              //getch();
            }
          getch();

}
