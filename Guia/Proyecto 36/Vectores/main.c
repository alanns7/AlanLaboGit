#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
  int enteros[10], posicion;
  char rta='s';
  int i;
  
  for(i=0;i<10;i++)
	enteros[i]=0;
  do
  {
	  printf("Ingrese posicion:");
      scanf("%d",&posicion);
      printf("Ingrese numero");
      scanf("%d",&enteros[posicion-1]);
      printf("Desea continuar guardando en el vector? \n");
      rta=tolower(getche());
      printf("\n");
  }while(rta=='s');
  
  printf("Los numeros ingresados son:");
  
  for(i=0;i<10;i++)
  {
	  if(enteros[i] != 0)
	  {
         printf("\n%d\n",enteros[i]);
	  }
  }
  
  system("PAUSE");	
  return 0;
}
