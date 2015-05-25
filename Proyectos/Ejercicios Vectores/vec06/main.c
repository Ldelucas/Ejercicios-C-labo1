#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a[10],b[10],c[100],i,numa,numb,flag=0;
	int menora,menorb,menores;

	
	for (i=0;i<10;i++)
	{
		printf("\nIngrese numero vector A[%d]:",i);
		scanf("%d",&numa);
		
        a[i] = numa;
        
        printf("\nIngrese numero vector A[%d]:",i);
		scanf("%d",&numb);
		
		b[i] = numb;

		if(flag==0)
		{
			menora = a[i];
			menorb = b[i];
			flag=1;
		}
		if(a[i]<menora)
			menora = a[i];

		if(b[i]<menorb)
			menorb = b[i];

		if(menora<menorb)
			menores = menora;
		else
			menores = menorb;
	 }
	 printf("\nEl menor es: %d\n\n",menores);
         getch();
	 
	 for(i=0;i<10;i++)
	 {
		printf("\nVectorA[%d] = %d",i,a[i]);
		printf("\nVectorB[%d] = %d",i,b[i]);
	 }
	 getch();
	 
	 for(i=0;i<10;i++)
	 {
		c[i] = menores;
		printf("\nVectorC[%d] = %d",i,c[i]);
	 }
	 getch();
}
