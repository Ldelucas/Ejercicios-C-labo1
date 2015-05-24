#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int dia;
        char opcion='s',seguir='s';
 
        do
        {
                
                printf("\nDias de la semana...\n\n1.Lunes\n2.Martes\n3.Miercoles\n4.Jueves\n5.Viernes\n6.Sabado\n7.Domingo\n\n");
                opcion = getche();
 
                if(opcion == '1')
                printf(".Lunes\n");
                if(opcion == '2')
                printf(".Martes\n");
                if(opcion == '3')
                printf(".Miercoles\n");
                if(opcion == '4')
                printf(".Jueves\n");
                if(opcion == '5')
                printf(".Viernes\n");
                if(opcion == '6')
                printf(".Sabado\n");
                if(opcion == '7')
                printf(".Domingo\n");
 
                printf("\nDesea continuar s/n ?");
                seguir = getch();
 
                while(seguir!='s'&&seguir!='n')
                {
                        printf("\nDesea continuar s/n ?");
                        seguir = getch();
                }
        }while(seguir=='s');
}
