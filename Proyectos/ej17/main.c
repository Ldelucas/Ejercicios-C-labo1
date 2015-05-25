#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, num, cuadrado,cubo; 
  printf("ingrese un numero:");
  scanf("%d", &num);
  for(n=1; n<=num; n++ )
  {
      cuadrado= n*n;
      cubo= n*n*n;
      printf("  \n %d \t %d \t %d \n",n,cuadrado,cubo);   
  }
  
  system("PAUSE");	
  return 0;
}
