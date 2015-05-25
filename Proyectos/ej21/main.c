#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,num, mult;
    printf("-----------TABLA DE MULTIPLICAR--------- \n \n" );
    printf("Imgrese numero a multiplicar: ");
    scanf("%d", &num);
    
    for(i=0; i<11; i++)
    {
      mult= num*i;
      printf("\n %d X %i = %d \n \n ",num,i,mult);
      getch();
    }
      
  system("PAUSE");	
  return 0;
}
