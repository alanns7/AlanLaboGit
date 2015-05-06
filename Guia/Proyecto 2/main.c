#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    int cuadrado;
    
    printf("Escriba un numero\n");
    scanf("%d",&numero);
    
    while(numero<=0)
   { 
    printf("Error, escriba un numero mayor a 0\n");
    scanf("%d",&numero);
   } 
    cuadrado=numero*numero;
    printf("El cuadrado de %d es %d \n",numero, cuadrado);
  
  system("PAUSE");	
  return 0;
}
