#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  int i;
  int positivo=0;
  int negativo=0;
  
  for(i=0;i<10;i++)
  
  {
   printf("ingrese un numero\n");                 
   scanf("%d",&numero);
   fflush(stdin);
  
   if(numero>0)
    {
       positivo++;
    }
  
   else
    {
       negativo=negativo+1;  
    }
  }
 printf("La cantidad de numeros positivos es: %d y la de negativos es: %d\n",positivo,negativo);
 
 
  system("PAUSE");	
  return 0;
}
