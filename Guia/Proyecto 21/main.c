#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
    int i;
    int numero;
    int resultado;
    
    printf("ingrese un numero\n");
    scanf("%d",&numero);
    fflush(stdin);
    
    for(i=0;i<11;i++)
    
  { 
    resultado=numero*i;
    printf("%d x %d = %d\n",numero,i,resultado);
  }  
    
  
  system("PAUSE");	
  return 0;
}
