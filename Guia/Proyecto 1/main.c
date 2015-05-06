#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  int i;
  float promedio;
  float acumulador=0;
  
  for(i=0;i<5;i++)
  {   printf("ingrese numero\n>");
      scanf("%d",&numero);
      fflush(stdin);
    
    acumulador=acumulador+numero;    
  }    
   promedio=acumulador/i;
   printf("Su promedio es: %.2f\n", promedio);
  
  system("PAUSE");	
  return 0;
}
