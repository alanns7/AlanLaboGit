#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  char respuesta='s';
  
  while(respuesta=='s')
  {
   printf("Ingrese un numero\n");
   scanf("%d",&numero);
  
   if(numero>0)
   {  
    printf("Su numero es positivo\n"); 
   } 
  
   else
   {
    printf("Su numero es negativo\n");
   }   
  printf("¿Desea ingresar otro numero?\n");
  scanf("%s",&respuesta);
  }
  
  system("PAUSE");	
  return 0;
}
