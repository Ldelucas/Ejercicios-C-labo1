#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char seguir='s', nombre[50];
    int i=0, nota, acum_nota=0;
    float promedio;
  do{
         system("cls");
         printf("\n NOMBRE:");
         fflush(stdin);
         gets(nombre);
         
         
           for(i=0; i<6; i++)
           {
              printf("\n INGRESE NOTA: ");
              scanf("%d", &nota);
              acum_nota= acum_nota+ nota;      
           }  
         promedio= ((float)acum_nota/6);
         
         system("cls");
         printf("\n NOMBRE ALUMNO:%s \t\t PROMEDIO:%.2f ",nombre, promedio);
         getch(); 
         
         printf("\n ¿DESEA SEGUIR INGRESANDO DATOS?: S/N");
         seguir=tolower(getch());
                       
    }while(seguir=='s');
          
          
  system("PAUSE");	
  return 0;
}
