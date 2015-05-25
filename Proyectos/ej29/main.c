#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char nombre[15], aux[50], seguir;
  float tarifa_hora, salario_semana;
  int horas_trab, cont=0;
  
     do{
             system("cls");
             printf("\n Ingrese nombre: \n");
             fflush(stdin);
             gets(nombre);
                  ////VALIDAR QUE EL NOMBRE NO SEA MAS LARGO QUE EL VECTOR/////
                  while(strlen(aux)>24)
                    {
                      printf("\n ERROR....nombre largo...REINGRESE: \n");
                      fflush(stdin);
                      gets(aux);             
                    }
                 strcpy(nombre, aux);
                 
                 
             printf("\n Ingrese cantidad de horas trabajadas a la semana: \n");
             scanf("%d", &horas_trab);
             
             printf("\n Ingrese tarifa por hora: \n");
             scanf("%f", &tarifa_hora);
             
                   salario_semana= (float)horas_trab* tarifa_hora;
                   cont++; 
             
                 printf("\n El salario semanal es de:%.2f \n",salario_semana);
                       
                 
                 printf("\n DESEA SEGUIR INGRSANDO DATOS?  S/N  \n");
                 seguir= tolower(getche());
                 
                            
        }while(seguir=='s');
         
                   
             printf("\n La cantidad de usuarios que se les calculo el salario es:%d \n",cont);
        
   system("PAUSE");	
   return 0;
}
