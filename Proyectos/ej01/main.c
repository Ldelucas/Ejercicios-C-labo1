#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float num,acunum=0, media;
  int i;
  
 for(i=0; i<5; i++)
 {
   system("cls");
    printf("ingrese  numero:");
    scanf("%f", &num);
   fflush(stdin);
   
   acunum= acunum+num;
 }
  media= acunum/5;
   printf("la media es: %.2f \n",media);
   getch();
  system("PAUSE");	
  return 0;
}
