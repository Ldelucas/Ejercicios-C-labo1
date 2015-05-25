#include <stdio.h>
#include <stdlib.h>
#include "contar.h"

int contar(char aux[])
{
   int i, cont=0;         
            for(i=0; i<1025; i++)
            {
             if(aux[i] != '\0')
             {
               cont++;
             }else{
                break;   
             }        
            }
            return  cont;
 }
 
 int contarLetras(char aux[] int cant)
{
   int i, contador=0;         
            for(i=0; i<cant; i++)
            {
             if(aux[i] == %c)
             {
               contador++;
             }else{
                break;   
             }        
            }
            return  contador;
 }
 
  int contarLetras(char aux[] int cant)
{
   int i, contador=0, cont=0;         
            for(i=0; i<1025; i++)
            {
              if(aux[i] != '\0')
              {
               cont++;
             
              if(aux[i] == %c)
              {
               contador++;
              }else{
                break;   
              }        
             
            }
            return  contador;
 }
 
 
 
 
 int leerArchivo(char nombre[],char contenido[])
{
	FILE *f;
	char aux_cadena[100];
	contenido[0] = '\0';

	f = fopen(nombre, "r");

	if (f==NULL)
	{
	   return -1;
	}

	while (fscanf (f, "%c", aux_cadena) != EOF )
	{
		  strcat(contenido,aux_cadena);
	}
	fscanf (f, "%s", contenido);

	return 1;
}

void mostrarResultado(palabra auxPalabras[], int size_array)
{

}

void inicializarArray(palabra * auxPalabras, int size_array)
{

}

void ordenarArray(palabra * auxPalabras, int size_array)
{

}
