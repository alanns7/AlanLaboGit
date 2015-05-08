#include <stdio.h>
#include <stdlib.h>
#define c 20

int main(int argc, char *argv[])
{
 int numeros[c],i,j,aux;   
    
    printf("Ingrese numeros\n");
    for(i=0;i<c;i++)
    {
        scanf("%d",&numeros[i]);
   
        while(numeros[i]<0)
        {  
           printf("Error, reingrese");
           scanf("%d",&numeros[i]);
        }
     }   
     for(i=0;i<c-1;i++)
     {   
        for(j=i+1;j<c;j++)
        { 
           if(numeros[i]<numeros[j])
             {
                aux=numeros[i];
                numeros[i]=numeros[j];
                numeros[j]=aux;
             }
            }   
           }        
     printf("Numeros ingresados en forma decreciente:\n"); 
     
     for(i=0;i<c;i++)
     {
       printf("%d\n",numeros[i]);
     } 
        
        
  system("PAUSE");	
  return 0;
}
