#include <stdio.h>
#include <stdlib.h>
#define TAM 3
int main(int argc, char *argv[])
{
    int legajo[TAM], flag=0, i, j, auxint;
    char nya[TAM][30], may_nomb[50], sexo[TAM], aux[50];
    float sueldo[TAM], may_sueldo[TAM], auxf;
    
    
    for(i=0; i<TAM; i++)
     {
       printf("\n Ingrese nombre y apellido: ");
       fflush(stdin);
       gets(nya[i]);
       
       
       printf("\n Ingrese legajo:");
       scanf("%d", &legajo[i]);
       
       printf("\n Ingrese sexo: F/M");
       sexo[i]= tolower(getch());
       
       printf("\n Ingrese sueldo:");
       scanf("%f", &sueldo[i]);       
             
          //if(sueldo> may_sueldo || flag==0)
            //{
              //may_sueldo[i]= sueldo[i];
               //strcpy(may_sueldo, sueldo);
               //strcpy(may_nomb, nya);
              // flag=1;     
           // }       
                    
                    
                       
                       
     }
     
     
                    for(i=0; i<TAM-1; i++)
                       {
                         for(j=i+1; j<TAM; j++)
                            {
                               if(strcmp(nya[i], nya[j])>0)
                                 {
                                     fflush(stdin);
                                     strcpy(aux , nya[i]);
                                   strcpy(nya[i], nya[j]);
                                   strcpy(nya[j], aux);         
                                                                   
                                   fflush(stdin);
                                   auxint= legajo[i];
                                   legajo[i]= legajo[j];
                                   legajo[j]= auxint;
                              
                              
                                   strcpy(aux , sexo[i]);
                                   strcpy(sexo[i], sexo[j]);
                                   strcpy(sexo[j], aux);
                                   
                                   fflush(stdin);
                                   auxf= sueldo[i];
                                   sueldo[i]= sueldo[j];
                                   sueldo[j]= auxf; 
                                 }     
                               
                            }
                               
                       }
     
     
       //printf("\n EMPLEADO CON MAYOR SUELDO \n \n %s: \t %.2f",may_nomb, may_sueldo);
      // for(i=0; i<TAM; i++)
                      {
            //             for(j=i+1; j<TAM; j++)
                            //{
         //  printf("\n LISTADO EMPLEADOS \n \n %s",nya[i][j]);
       
     //}  
     
     for(i=0; i<TAM; i++)
					{
						//if(nya[i]!=0)
						//{
                            printf("NOMBRE\tLEGAJO\tSEXO\tSUELDO\n\n");           
							printf("%s\t%d\t%c\t%.2f\n",nya[i], legajo[i], sexo[i], sueldo[i]);
						//}
					}
  system("PAUSE");	
  return 0;
}
}
