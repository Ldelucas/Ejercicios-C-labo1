#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i, vec[10],aux;char seguir;

	for(i=0;i<10;i++)
		vec[i]=0;

	do
	{       
		for(i=0;i<10;i++)
		{
			printf("Ingrese n£mero:");
			scanf("%d",&aux);
			vec[i] = vec[i] + aux;
		}
		printf("\n\nDesea seguir s/n?");
		seguir = getch();
	}while(seguir=='s');

		for(i=0;i<10;i++)
			printf("\nElemento\t %d = %d \tCantidad total",i,vec[i]);

		getch();
}
