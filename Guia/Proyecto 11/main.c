#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int contador=0;
  
  
  for(i=1;i<101;i++)
  {
  if ((i%2)==0)
   {
    printf("%d\n",i);
    contador++;
   }
  }
  
  printf("La cantidad de numeros pares es: %d\n", contador);
  
  system("PAUSE");	
  return 0;
}
