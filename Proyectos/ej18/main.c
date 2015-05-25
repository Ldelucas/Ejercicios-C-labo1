#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int cont=0, contmay=0, contmenos=0;
    char nombre[50], seguir;
    float peso;
  do{
      system("cls");
      printf("-------REGISTRO DE EMPLEADOS------ \n \n");       
      printf("\n NOMBRE:");
      fflush(stdin);
      gets(nombre);
      
      printf("\n PESO:");
      scanf("%f", &peso);
      
      cont++;
      
      
      if(peso <= 80)
      {
        contmenos++;
      }else{
           
        contmay++;   
      }
      printf("\n \n Desea seguir ingresando datos: S/N");       
      seguir=tolower(getche());
      getch();       
  }while(seguir== 's');
    
    system("cls");
    printf("\n De %d ingresados",cont);
    printf("\n CANTIDAD CON MAYOR PESO A 80KG:%d \nCANTIDAD CON MENOR PESO A 80KG:%d \n",contmay, contmenos);
    getch();
  system("PAUSE");	
  return 0;
}
