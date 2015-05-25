#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contar.h"

#define PAUSE()  do { printf("\n\n-PAUSE- file: %s line:%d\n", __FILE__, __LINE__); getchar(); } while (0)

#define ARRAY_SIZE 1000



int leerArchivo(char nombre[],char contenido[]);
void mostrarResultado(palabra* auxPalabras, int size_array);
void ordenarArray(palabra* auxPalabras, int size_array);

int main(void)
{

  //palabra palabras[ARRAY_SIZE];
  //char cadena[50];
  char contenidoArchivo[1024];
  int cantidad, cantLetras;
  
  leerArchivo("C:\Users\Ldelucas64bit\Documents\Devc++\Proyectos\lucas contarletras\Nueva carpeta\LUCAS.txt",contenidoArchivo);
  printf("%s",contenidoArchivo);
  
  cantidad= contar(contenidoArchivo);
  cantLetras= contarLetras(contenidoArchivo, cantidad);
  
  printf("\n La cantidad es: %d",cantidad);
  printf("\n El contenido del archivo es: %s",contenidoArchivo);
  printf("\n La cantidad de letras es: %d",cantLetras);
  
  getch();
  PAUSE();
  return 1;
}






