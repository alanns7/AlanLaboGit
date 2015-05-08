#include <stdio.h>
#include <stdlib.h>
#define c 20
int main(int argc, char *argv[])
{
  int numeros[c],i,j,aux;
  
  /*for(i=0;i<c;i++)
  {
     numeros[i]=0;
  }*/
  
  for(i=0;i<c;i++)
  {
    printf("Ingrese numero\n");
    scanf("%d",&numeros[i]);
    
    while(numeros[i]==0)
    {
       printf("Reingrese numero");
       scanf("%d",&numeros[i]);
    }
  }
  //vector
  for(i=0;i<c;i++)
  {
     printf("Vector: %d\n",numeros[i]);              
  }
  printf("\n");
  
  // numeros positivos
   for(i=0;i<c;i++)
     for(j=i+1;j<c;j++)     
      {
         if(numeros[i]>0)
         {
            if(numeros[i]<numeros[j])
            {
               aux=numeros[i];
               numeros[i]=numeros[j];
               numeros[j]=aux;
            }
         }            
       }

 for(i=0;i<c;i++)
  {
    if(numeros[i]>0)
     {
       printf("Numeros positivos en forma decreciente%d\n",numeros[i]);  
     }            
  }
  
 printf("\n"); 
 
 // numeros negativos
   for(i=0;i<c;i++)
     {for(j=i+1;j<c;j++)     
      {
         if(numeros[i]<0)
         {
            if(numeros[i]>numeros[j])
            {
               aux=numeros[i];
               numeros[i]=numeros[j];
               numeros[j]=aux; 
            }
         }            
       }
      } 
for(i=0;i<c;i++)
  {
    if(numeros[i]<0)
     {
       printf("Numeros negativos en forma creciente %d\n",numeros[i]);  
     }            
  }
  system("PAUSE");	
  return 0;
}
