#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   char nombre[25], apellido[25], nomb_cultgral[25], apellido_cultgral[25];
   char apellido_maxpunt[25], nomb_maxpunt[25];
   
   int i, acum_cult=0, acum_int=0, acum_belleza=0, max_cultura=0, min_int, min_belleza;
   int inteligencia, cult_gral, belleza, suma, menor_acum, max_suma=0, total_punt=0;
   
              
       for(i=0; i<5; i++)
        {
          system("cls");
          printf("\n NOMBRE:");
          scanf("%s", nombre);
          fflush(stdin);
          
          printf("\n APELLIDO:");
          gets(apellido);
          fflush(stdin);
          
          printf("\n PUNTOS POR INTELIGENCIA");
          scanf("%d", &inteligencia);
          acum_int= acum_int+ inteligencia;
             if(inteligencia< min_int)
               {
                           min_int= inteligencia;
               }
          
          
          printf("\n PUNTOS CULTURA GENERAL:");
          scanf("%d", &cult_gral);
          acum_cult= acum_cult+ cult_gral;
             
             if(cult_gral> max_cultura)
               {
                           max_cultura= cult_gral;
                           strcpy(nomb_cultgral, nombre);
                           strcpy(apellido_cultgral, apellido);
               }
          
          printf("\n PUNTOS BELLEZA:");
          scanf("%d", &belleza);
          acum_belleza= acum_belleza+ belleza;
          
             if(belleza< min_belleza)
               {
                           min_belleza= belleza;
               }
               
              
                     suma= inteligencia+ cult_gral+ belleza; 
                     
                     if(suma> max_suma)
                       { 
                         max_suma= suma;
                         fflush(stdin);
                         strcpy(nomb_maxpunt, nombre);
                         strcpy(apellido_maxpunt, apellido);  
                           
                       }
                       
                     
                     if(acum_belleza< acum_cult && acum_belleza< acum_int)
                       { 
                         menor_acum= acum_belleza;            
                       }
                       if(acum_cult< acum_belleza && acum_cult< acum_int)
                       {
                           menor_acum= acum_cult;
                       }else{
                           
                           menor_acum= acum_int;  
                       }         
        }
              total_punt= acum_belleza+ acum_cult+ acum_int;
        
                                    printf("\n La concursante con mayor puntaje general es: %s ",apellido_maxpunt);
                                    
                                    printf("%s",nomb_maxpunt);
                                    
                                    printf("\n El puntaje acumulado por la concursantes es: %d \n",acum_belleza+ acum_cult+ acum_int);
                                
                                    printf("\n El menor de los 3 puntajes acumulado es: %d \n",menor_acum);
                                     getch();  
              
              
               system("PAUSE");	
               return 0;
}
