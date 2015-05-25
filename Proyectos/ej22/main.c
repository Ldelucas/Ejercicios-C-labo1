  #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int legajo, sueldo,sexo, flag=0, contm=0, cont=0, contf=0;
    char seguir, nombre[20]; 
  do{
  system("cls");
  printf("ingrese numero de legajo;");
   scanf("%d", &legajo);
  printf("ingrese nombre:");
   fflush(stdin);
   gets(nombre);
  printf("ingrese sueldo:");
   scanf("%d", &sueldo);
  printf("ingrese sexo: 1 femenino /2 masculino");
  //printf("ingrese 1/2");
   scanf("%d", &sexo);
     cont++;
  //flag=0;
  if(sexo == 2 && sueldo <= 400)
   {
     contm++;
   }
  if(sexo == 1 && sueldo >= 500)
   {
     contf++;
   }
   
  printf("Desea continuar s/n?");
    //scanf("%c", &seguir);
    seguir= tolower(getche());
    getch();
  }while(seguir == 's' );

  system("cls");
 printf("De %d ingresados\n\n",cont);
  printf("Mujeres que ganan mas de 500: %d \n Hombres que ganan menos de 400: %d",contf, contm);
  getch();
  system("PAUSE");	
  return 0;
}
