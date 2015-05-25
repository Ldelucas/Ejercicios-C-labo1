#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i,vec[4],j,aux;

	
	for(i=0;i<5;i++)
	{
		printf("NUMERO:");
		scanf("%d",&vec[i]);
	}
	for(i=0;i<5;i++)
		printf("\nVector [%d] = %d",i,vec[i]);

	printf("\n");

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(vec[i]<vec[j])
			{
				aux    = vec[j];
				vec[j] = vec[i];
				vec[i] = aux;
			}

		}
	  printf("\nVector [%d] = %d",i,vec[i]);
	}
	getch();
}
