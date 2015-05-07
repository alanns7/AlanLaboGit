#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1=0;
  int num2=0;
  int utilizable;
  
  printf("Ingrese un numero\n");
  scanf("\n%d>",&num1);
  
  printf("Ingrese otro numero\n");
  scanf("\n%d",&num2);
  
  utilizable=num1;
  num1=num2;
  num2=utilizable;
  
  printf("El numero 1 es: %d\n",num1);
  printf("El numero 2 es: %d\n",num2);
   
   
  system("PAUSE");	
  return 0;
}
