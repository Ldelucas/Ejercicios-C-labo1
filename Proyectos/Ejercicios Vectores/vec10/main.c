#include <stdio.h>
#include <stdlib.h>
#define N 6
int main(int argc, char *argv[])
{


	int vec[N-1],i,num,j,aux;
	
	for(i=0;i<N;i++)
	{
		printf("\nN£mero:");
		scanf("%d",&num);
		vec[i] = num;

		while(num == 0)
		{
			printf("\nN£mero (distinto de cero):");
			scanf("%d",&num);
			vec[i] = num;
		}
	}
	printf("\n\nN£meros mayores a cero:");
	for(i=0;i<N;i++)
	{
		if(vec[i]>0)
			printf("\nVec [%d] = %d",i,vec[i]);
	}
	printf("\n\nN£meros mayores a cero de mayor a menor:");
	for(i=0;i<N;i++)
	{
		if(vec[i]>0)
		{
			for(j=i+1;j<N;j++)
			{
				if(vec[i]<vec[j])
				{
					aux = vec[j];
					vec[j] = vec[i];
					vec[i] = aux;

				}
			}
		printf("\nVec [%d] = %d",i,vec[i]);
		}
	}
	printf("\n\nN£meros menores a cero:");
	for(i=0;i<N;i++)
	{
		if(vec[i]<0)
			printf("\nVec [%d] = %d",i,vec[i]);
	}
	printf("\n\nN£meros menores a cero de menor a mayor:");
	for(i=0;i<N;i++)
	{
		if(vec[i]<0)
		{
			for(j=i+1;j<N;j++)
			{
				if(vec[i]<vec[j])
				{
					aux = vec[j];
					vec[j] = vec[i];
					vec[i] = aux;

				}
			}
		printf("\nVec [%d] = %d",i,vec[i]);
		}
	}
	getch();
}
