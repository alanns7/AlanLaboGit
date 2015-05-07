#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    int par;
    int impar;
  
  printf("Introduzca un numero\n");
  scanf("%d",&numero);
  
  if ((numero%2)==0)
  {
   printf("Su numero es par\n");
  }
  
  else
  {
   printf("Su numero es impar\n");
  }
  
  system("PAUSE");	
  return 0;
}
