#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int base,altura,area,total;
 
        printf("Base:");
        scanf("%d",&base);
        printf("Altura:");
        scanf("%d",&altura);
 
        area = base * altura;
        area = area / 2;
 
        printf("El area del triangulo es de %d",area);
        getch();
}
