#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int main(int argc, char *argv[])
{
int legajo[TAM],edad[TAM],salario[TAM],i,eda,salar;
	int edades=0,promedad,mayorprom=0,numlegajo;

	
	for(i=1;i<10;i++)
	{
		printf("Ingrese legajo %d",i);
		printf("\nIngrese edad:");
		scanf("%d",&eda);
		edad[i] = eda;
		printf("Ingrese salario:");
		scanf("%d",&salario);
		salario[i] = salar;

		edades = edades + eda;
		promedad = edades / 9;
	}
	printf("\n\nPromedio edad de los trabajadores: %d a¤os\n",promedad);

	for(i=1;i<10;i++)
	{
		if(edad[i]>promedad)
		{
			mayorprom = mayorprom + 1;
			numlegajo = i;
			printf("\nEl empleado del legajo %d es mayor al promedio de edad",numlegajo);
		}
	}
	printf("\n\nTotal empleados mayores al promedio de edad: %d",mayorprom);
	getch();
}

