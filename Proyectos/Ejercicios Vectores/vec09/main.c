#include <stdio.h>
#include <stdlib.h>
#define N 8
int main(int argc, char *argv[])
{
int legajo[N],edad[N],salario[N],i;

	for(i=0;i<N;i++)
	{
		
		printf("Ingrese legajo:");
		scanf("%d",&legajo[i]);

		while(legajo[i]<0 || legajo[i]>N)
		{
			printf("Reingrese legajo:");
			scanf("%d",&legajo[i]);
		}

		printf("Ingrese edad:");
		scanf("%d",&edad[i]);
		printf("Ingrese salario:");
		scanf("%d",&salario[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("\nLegajo:%d",legajo[i]);
		printf(" Edad:%d", edad[i]);
		printf(" Salario:%d", salario[i]);
	}
	getch();
}
