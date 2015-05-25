#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  char nombre[100];
  char antiguedad;
  int horasMes;
  float valorHora;
  float resultado;
  
  printf("\nNombre >");
  scanf("%s",&nombre);
  getch();
  fflush(stdin);
  
  printf("\nAntiguedad >");
  scanf("%c",&antiguedad);
  fflush(stdin);
  
  printf("\nHoras Mes >");
  scanf("%d",&horasMes);
  fflush(stdin);
  
  printf("\nValor Hora >");
  scanf("%f",&valorHora);
  fflush(stdin);
  
  resultado = (valorHora * horasMes) + (antiguedad * 30);
  printf("El empleado %s cobra: $ %.2f",nombre,resultado) ;
    
  
  
  
  system("PAUSE");	
}
