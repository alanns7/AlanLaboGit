#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int enteros[10];
  int i;
  
  for(i=0;i<10;i++)
  {
   printf("\nIngrese numero\n");
   scanf("%d",&enteros[i]);
  }
  printf("Los numeros ingresados son:");
  
  for(i=0;i<10;i++)
  {
  printf("\n%d\n",enteros[i]);
  }
  
  
  
  
  system("PAUSE");	
  return 0;
}
