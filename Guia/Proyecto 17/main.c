#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int limite;
  
  printf("Ingresese numero limite: ");
  scanf("%d", &limite);
  
  for(i=1;i<(limite+1);i++)
  {
       printf("\n \n Numero: %d", i);
       printf("\n Cuadrado: %d", (i*i));
       printf("\n Cubo: %d \n \n", (i*i*i));                 
  }
  
  system("PAUSE");	
  return 0;
}
