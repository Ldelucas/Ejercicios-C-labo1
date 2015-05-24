#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float cms,pulgadas;
        int pies;
 
        printf("Centimetros:");
        scanf("%f",&cms);
 
        pies = 0.030003 * cms;
        pulgadas =  0.0336034 * cms;
 
 
        printf("\n%.2f cms equivale a %d pies",cms,pies);
        printf("\n%.2f cms equivale a %.1f pulgadas",cms,pulgadas);
        printf("\n\n%.2f cms = %d pies = %.1f pulgadas",cms,pies,pulgadas);
        getch();
}
