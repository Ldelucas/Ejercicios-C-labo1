#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float alt, mayalt=0;
  char seguir='s', nombre[50], apellido[50], nombalum[50];
  
  while(seguir== 's')
  {
    system("cls");
    printf("\n Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    
    printf("\n Ingrese apellido: ");
    fflush(stdin);
    gets(apellido);
    
    printf("\n Ingrese altura: ");
    scanf("%f", &alt);
    
      if(alt> mayalt)
       {
          mayalt= alt;
          fflush(stdin);
          strcpy(nombalum, nombre);    
       }
      
     printf("\n Desea seguir ingresando datos: S/N  ");
     seguir=tolower(getch());
     //seguir= tolower(seguir);
     //getch();  
  
  }
     system("cls");
     printf("\n El alumono mas alto es: %s \n \n La altura es de: %.2f",nombalum, mayalt);
     getch();
  //system("PAUSE");	
  //return 0;
}
