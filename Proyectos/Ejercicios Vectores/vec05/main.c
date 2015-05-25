#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i,mayordia,flag=0,dia_mes;
	float gasto,gastot=0,mayorgasto,vector[31],gastotales=0;
	char seguir ='s';

	
	printf("\nCantidad de dias del mes:");
	scanf("%d",&dia_mes);

	while(dia_mes<0 || dia_mes>31)
	{
		
		printf("\nReing.Cantidad de dias del mes:");
		scanf("%d",&dia_mes);
	}

	for(i=1;i<dia_mes+1;i++)
	{
		do
		{
			
			
			printf("\nDia %d:",i);
			scanf("%f",&gasto);

			printf("\nIngresar mas gastos para el dia %d s/n ?\n",i);
			seguir = tolower(getch());

			gastot = gastot + gasto;
			gastotales = gastotales + gasto;
			vector[i] = gastot;

		}while(seguir=='s');

		if(flag==0 || gastot> mayorgasto)
		{
			mayorgasto = gastot;
			mayordia = i;
			flag =1;
		}

		gastot=0;

	}

	printf("\nGASTOS DEL MES (%.2f $)\n\n",gastotales);
	printf("\nEl dia %d fue el de mayor gasto con %.2f $",mayordia,mayorgasto);
	getch();
}

