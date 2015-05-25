#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int numero1,numero2,a,b;
 
        printf("Numero 1:");
        scanf("%d",&numero1);
        printf("Numero 2:");
        scanf("%d",&numero2);
 
        a = numero1;
        b = numero2;
        numero1 = b;
        numero2 = a;
 
        printf("\nEl numero 1 es: %d\nEl numero 2 es: %d",numero1,numero2);
        getch();
}
