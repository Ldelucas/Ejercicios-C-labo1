#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
 float socio,promedioedad=0,promedioedad2=0;
        int edad,tenis=0,voley=0;
        float promedio1=0,promedio2=0;
        char nombre [20],seguir = 's',deporte = 's',apellido[20];
 
        system("cls");
 
        do
        {
 
                printf("\nNumero de socio:");
                scanf("%f",&socio);
                printf("Nombre:");
                scanf("%s",&nombre);
                printf("Apellido:");
                scanf("%s",&apellido);
                printf("Edad:");
                scanf("%d",&edad);
                printf("Deporte que practica:\n\n1.Tenis\n2.Rugby\n3.Voley\n4.Hockey\n5.Futbol\n\n");
                deporte = getche();
 
                if(deporte != '1', deporte != '2',deporte != '3',deporte != '4',deporte != '5')
                printf(".ERROR.Pulse n&#163;mero correspondiente al deporte que practica");
 
                if(deporte == '1')
                {
                        printf(".Tenis");
                        tenis = tenis + 1;
                        promedio1 = promedio1 + edad;
                        promedioedad = promedio1 / tenis;
                }
                if(deporte == '3')
                {
                        printf(".Voley");
                        voley = voley + 1;
                        promedio2 = promedio2 + edad;
                        promedioedad2 = promedio2 / voley;
                }
 
                if(deporte == '2')
                        printf(".Rugby ---> No update (No se guardan los datos)");
                if(deporte == '4')
                        printf(".Hockey ---> No update (No se guardan los datos)");
                if(deporte == '5')
                        printf(".Futbol ---> No update (No se guardan los datos)");
 
 
 
                printf("\n\nDesea seguir ingresando datos? s/n\n");
                seguir = getch();
 
                while(seguir != 's' && seguir != 'n')
                {
                        printf("\nERROR, reingrese respuesta s/n ?\n");
                        seguir = getch();
                }
 
        }while(seguir =='s');
        printf("\nTenis practican %d y el promedio de edad es %.2f anios",tenis,promedioedad);
        printf("\nVoley practican %d y el promedio de edad es %.2f anios",voley,promedioedad2);
        getch();
}
