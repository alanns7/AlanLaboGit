#include <stdio.h>
#include <stdlib.h>
#define c 4

int main(int argc, char *argv[])
{
  int leg[c], edad[c], salario[c],suma=0,i,aux_leg;
  float prom;  
  
     
     for(i=0;i<c;i++)
     {
         leg[i]=0;
     }
     
      for(i=0;i<c;i++)
      {
         printf("\nIngrese legajo\n");
         scanf("%d",&aux_leg);
           
        for(i=0;i<c;i++)//validacion
        {
            while(aux_leg==leg[i])
            {
               printf("\nError, legajo no valido. Reingrese\n");
               scanf("%d",&aux_leg);
               fflush(stdin);
            }
        } 
         leg[i]=aux_leg;
        
         printf("Ingrese edad\n");
         scanf("%d",&edad[i]);
         fflush(stdin);
        
         
         printf("Ingrese salario\n");
         scanf("%d",&salario[i]);
         fflush(stdin);
         suma+=salario[i]; 
         
         printf("\nNuevo Empleado\n");
      }
  prom=(float)suma/c;
  
  printf("\nPromedio: %.2f\n",prom);
  
  printf("\nLegajos de empleado con salario mayor al promedio:\n");
  
  for(i=0;i<c;i++)
  {
          if(salario[i]>prom)
          {
             printf("%d\n",leg[i]);
          }
  }
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
