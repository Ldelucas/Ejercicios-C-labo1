#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
        int num,mayor0=0,menor0=0,cont=0;
 
        while(cont<10)
        {
                printf("\nnumero:");
                scanf("%d",&num);
 
                if(num==0)
                {
                printf("\nERROR.Tiene que ser menor o mayor que cero.\n");
                cont--;
                }
                if(num>0)
                mayor0 = mayor0 + 1;
                if(num<0)
                menor0 = menor0 + 1;
 
                cont = cont + 1;
 
        }
        printf("\nDe %d numeros ingresados...\n\n%d son mayores a cero\n%d son menores a cero",cont,mayor0,menor0);
        getch();
}
