#include <stdio.h>
#include <stdlib.h>
 
void main() {
    
    char sNum[20];
    int num;
    
    printf("Ingrese numero\n");
    scanf("%s",sNum);
    num=atoi(sNum); /* atoi convierte el numero ingresado como cadena en entero
    en caso de ser posible, de lo contrario retorna 0*/
    
    while(num==0) 
        {
        //printf("El numero es: %d\n",num);
    
        printf("No es un numero reingrese\n");
    scanf("%d",&num);
}
    printf("El numero es: %d\n",num);
    getch();
    
}
