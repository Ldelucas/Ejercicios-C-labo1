#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int anio, temp_max, max, temp_min, min, anio_max, anio_min;
    char seguir= 's'; 
    int dia, mes, dia_max, mes_max, dia_min, mes_min;
    
  while(seguir=='s')
   {
         system("cls");
         printf("\n Ingrese dia:");
         scanf("%d", &dia);
         fflush(stdin);
         
         printf("\n Ingrese mes:");
         scanf("%d", &mes);
         fflush(stdin);
         
         printf("\n Ingrese anio:");
         scanf("%d", &anio);
         
         printf("\n Ingrese temperatura maxima:");
         scanf("%d", &temp_max);
         
           if(temp_max> max)
            {
                        max=temp_max;
                        dia_max= dia;
                        mes_max= mes;
                        anio_max= anio;
            }
         printf("\n Ingrese temperatura minima:");
         scanf("%d", &temp_min);
         
            if(temp_min< min)
            {
                        min= temp_min;
                        dia_min= dia;
                        mes_min= mes;
                        anio_min= anio;
            }
            
            printf("\n Desea seguir ingresando datos: S/N");
            seguir= tolower(getch());
                  
   }
   
            system("cls");
            printf("\n DIA MAS FRIO:%d/%d/%d \n TEMPERATURA: %d",dia_min, mes_min, anio_min, min );
            printf("\n\n\n DIA MAS CALIDO::%d/%d/%d \n TEMPERATURA: %d",dia_max, mes_max, anio_max, max );
            getch();
            
            //system("PAUSE");	
            //return 0;
}
