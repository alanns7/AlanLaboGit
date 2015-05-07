#include <stdio.h>
#include <stdlib.h>
#define c 3

int main(int argc, char *argv[])
{
  int leg[c], edad[c], salario[c],suma,i;
  float prom;  
  
  for(i=1;i<c;i++)
  {
     printf("Ingrese leg");
     scanf("%d",&leg[i]);
     
      printf("Ingrese edad");
     scanf("%d",&edad[i]);
     suma+=edad; //suma=suma+edad;
      printf("Ingrese salario");
     scanf("%d",&salario[i]);
     
  }
  prom=suma/c;
  for(int i=1;i<c;i++)
  {
          if(edad[i]>prom)
          {
             printf("Legajo con edad mayores al prom: %d",leg[i]);
          }
  }
  system("PAUSE");	
  return 0;
}
