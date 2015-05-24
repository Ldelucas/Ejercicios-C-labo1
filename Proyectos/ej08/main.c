#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0, conta=0, conte=0, conti=0, conto=0, contu=0;
  char letra;
  
  printf("Ingrese 20 letras");
  for(i; i<20; i++)
  {
         
          system("cls");//clrscr();
          printf("ingrese letra:");
          scanf("%c", &letra);
          fflush(stdin);
          letra=tolower(letra);
  
  switch(letra)
  {
    case 'a': 
             conta++;
             break;
    case 'e':
             conte++;
             break;
    case 'i':
             conti++;
             break;            
    case 'o':
             conto++;
             break;    
    case 'u':
             contu++;
             break;
  
  }
  }
  printf("las letra A se ingreso:%d \n las letra E se ingreso:%d \n las letra I se ingreso:%d \n las letra O se ingreso:%d \n las letra U se ingreso:%d \n",conta,conte, conti, conto, contu); 
  getch();
  //system("PAUSE");	
 // return 0;

}

