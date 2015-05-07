#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float peso;
  char respuesta='s';
  int contador1=0;
  int contador2=0;
  
  while(respuesta=='s')
  {
      printf("Ingrese peso\n");
      scanf("%f",&peso);
      fflush(stdin);
      
      if(peso<=80)
      {
          contador1++;
      }
      else
      {
          contador2++;
      }

      printf("Desea ingresar  nuevo peso?\n");
      scanf("%c",&respuesta);
      fflush(stdin);
  }
  
  printf("Los que pesan menos o igual a 80 son: %d y los que pesan mas son: %d\n",contador1,contador2);
  
  
  
  system("PAUSE");
  return 0;
}
