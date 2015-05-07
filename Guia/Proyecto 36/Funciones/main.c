#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

int main(int argc, char *argv[])
{
    char nombre[30];
    char fecha;
    float sueldo;
    
    for(i=0;i<10;i++);
    {  
        printf("\nIngrese nombre");
        fflush(stdin);
        gets(nombre);
        
        printf("\nIngrese fecha");
        scanf("%d",&fecha);
    
        printf("\nIngrese sueldo");
        scanf("%f",&sueldo);
        valida_sueldo(sueldo);
        
  
  system("PAUSE");	
  return 0;
}
