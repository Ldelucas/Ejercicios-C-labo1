#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
 
        printf("Numero:");
        scanf("%d",&num);
 
        if(num > 0)
        printf("El Numero %d es positivo",num);
        if(num < 0)
        printf("El Numero %d es negativo",num);
        if(num == 0)
        printf("El Numero que eligio es el %d",num);
        getch();
}
