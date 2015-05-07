#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j,numero,suma[10];
  char respuesta='s';
  
  
   for(i=0;i<10;i++)
   {
      while(respuesta=='s')
         {
        
        
          printf("\nIngrese numeros a sumar en elemento %d\n",i);
          scanf("%d",&numero);
          fflush(stdin);
          
          suma[i]+=numero;  
          
          printf("\nDesea ingresar otro numero?");
          scanf("%c",&respuesta);
          fflush(stdin);
          
          if(respuesta=='n')
          {
             suma[i+1]=0;
          }  
         }    
       
     } 
    for(i=0;suma[i]<10;i++)
    {
      printf("\nElemento %20d Cantidad total %d\n",i,suma[i]); 
    }
  
  system("PAUSE");	
  return 0;
}
