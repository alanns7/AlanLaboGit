#include <stdio.h>
#include <stdlib.h>
#define c 3

int main(int argc, char *argv[])
{
  int leg[c],aux_leg=0, edad[c], salario[c],suma=0,i;
  float prom;  
  
      for(i=0;i<c;i++)
      {
       leg[i]=0;
      }
  
      for(i=1;i<c;i++)
      {
         printf("\nIngrese legajo\n");
         scanf("%d",&aux_leg);
         
         leg[aux_leg]=aux_leg;
         
         while(leg[aux_leg==0])
         {
            printf("\nError, legajo no valido. Reingrese\n");
            scanf("%d",&aux_leg);
            fflush(stdin);
            leg[aux_leg]=aux_leg;
         }
         
         printf("Ingrese edad\n");
         scanf("%d",&edad[i]);
         fflush(stdin);
         suma+=edad[i]; //suma=suma+edad;
         
         printf("Ingrese salario\n");
         scanf("%d",&salario[i]);
         fflush(stdin);
         
         printf("\nNuevo Empleado\n");
      }
  prom=(float)suma/c;
  
  printf("\nPromedio: %.2f\n",prom);
  
  printf("\nLegajos de empleado con edad mayor al promedio:\t");
  
  for(i=1;i<c;i++)
  {
          if(edad[i]>prom)
          {
             printf("%d",leg[i]);
          }
  }
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
