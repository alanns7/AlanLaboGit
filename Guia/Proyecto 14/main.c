#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int i;
 int acumulador=0;
 
 for(i=3;i<100;i=i+3)
 
  {
    printf("%d\n",i);
    acumulador=acumulador + i;
  
  }
    printf("La suma es %d\n",acumulador);
    
  system("PAUSE");	
  return 0;
}
