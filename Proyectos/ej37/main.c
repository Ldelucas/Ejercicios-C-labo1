#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//int validar_leg(int);


int main(int argc, char *argv[])
{
  char nombre[15], seguir;
  int legajo, val, cont=0;
  float hora_llegada, min_llegada, lk;
  do{
             system("cls");
             printf("\n Ingrese nombre:");
             fflush(stdin);
             gets(nombre);
              
             
             printf("\nIngrese legajo:");
             scanf("%d", &legajo);
           
            /* while(isalpha(legajo))
             //while(legajo == '%c')
                    {
                         
                           printf("ERROR.. reingrese legajo con numeros:");
                    //getch();
                    //}else{
                           //return 1;
                          
                           scanf("%d", &legajo);
                            fflush(stdin);
                    }
                    
             //val= validar_leg(legajo);*/
             
             printf("\n INGRESE HORA DE LLEGADA");
             printf("\nHora:");
             scanf("%d", &hora_llegada);
             
             
             
             printf("\nMinutos:");
             scanf("%d", &min_llegada);
            
             cont++;
             printf("\n Desea seguir ingresando datos: S/N");
             seguir= tolower(getch());
  }while(seguir=='s');
  
             
             if(hora_llegada >= 9 && min_llegada >= 10 )
             for(i=0; i<cont-1; i++)
               {
               for(j+1; j<cont; j++)
                  {
                        
                  }
                      
               } 
 
  system("PAUSE");	
  return 0;
}


            // int validar_leg(int x)
              // {
                //    if(x!= '%d')
                  //  {
                    //       return 0;
                    //}else{
                      //     return 1;
                    //}
               //}
