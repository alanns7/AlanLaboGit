#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int i;
  int contador=0;
  
  
  for(i=0;i<100;i++)
  {
  if((i%2)==1)
   {
    printf("%d\n",i);
    contador++;
   }
  }
  
  printf("La cantidad de numeros impares es: %d\n", contador);
  
  system("PAUSE");	
  return 0;
}
