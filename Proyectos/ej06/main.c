#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
 
        printf("Numero:");
        scanf("%d",&num);
 
        while(num==0)
        {
        printf("Si ingresa 0 no responde");
        printf("\nNumero:");
        scanf("%d",&num);
        }
        if(num%2==0)
        printf("%d es par",num);
        else
        printf("%d no es par",num);
 
        getch();
}
