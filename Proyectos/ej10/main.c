#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int impares,impar=0;
 
        
        for(impares=0;impares<100;impares++)
        {
                if(impares%2!=0)
                {
                printf("\n%d",impares);
                impar = impar + 1;
                }
        }
        printf("\n%d numeros impares desde el 1 al 100",impar);
        getch();
}
 
