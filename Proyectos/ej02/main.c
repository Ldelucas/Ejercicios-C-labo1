#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num, cuadrado;
  char resp;
 do{
    system("cls");
    printf("ingrese numero:");
    scanf("%d", &num);
             while(num <= 0)
             {
              printf("ERROR, el numero debe ser mayor que cero....... \n reingrese: ");
              scanf("%d", &num);
             }
      cuadrado= num*num;
      system("cls");
     printf("el cuadrado del numero es:%d", cuadrado);
     printf("\n desea continuar: s/n \n ");
      resp= tolower(getch());
     
  }while(resp=='s');
  
}
