#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

int main(int argc, char *argv[])
{
    
    int numero;
    int suma=0;
    int maximo, minimo;
    float promedio;
    int i;
    int inicial;
      
    
    for(i=0;i<20;i++)
    {
       printf("\nIngrese numero");
       scanf("%d",&numero);
       validacion_num(numero);
       suma=suma+numero;
    
       if(inicial=0)
        {  
           maximo=numero;
           minimo=numero;
           inicial=1;
        }
        
        if(numero>maximo)
           maximo=numero;
        
        if(numero<minimo)
           minimo=numero;

    }   
         promedio=suma/20;
         
         
     printf("\nEl valor maximo es %d",maximo);
     printf("\nEl valor minimo es %d",minimo);
     printf("\nEl promedio es %.2f",promedio); 
    
    
  system("PAUSE");	
  return 0;
}
