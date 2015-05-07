#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

int main(int argc, char *argv[])
{
  int numero, suma=0;
  char respuesta;
  
    
   do
  {
        printf("Ingrese numero\n");
        scanf("%d",&numero);
        fflush(stdin);
        
        suma=suma+numero;
          
        printf("Continua S/N?\n");
        scanf("%c",&respuesta);
        fflush(stdin);
        
        validaS_N(respuesta);
  
  }while(respuesta!='1'); 
  
  printf("La suma de los datos es: %d\n",suma);
  
  
  system("PAUSE");	
  return 0;
}
