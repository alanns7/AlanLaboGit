#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int numero[20];
    int i, mayor, inicial=0,pos_mayor[4];
    
    printf("ingrese 20 numeros\n");
    
    for(i=1;i<21;i++)
    {
       scanf("%d",&numero[i]);
       
       if(inicial==0)
       {
         mayor=numero[i];
         inicial=1;
       }
       
       if(numero[i]>mayor)
       mayor=numero[i]; 
       
      printf("Posicion %d con numero %d\n",i,numero[i]);
    }
       
        for(i=1;i<21;i++)
        { 
          if(numero[i]==mayor)
          {
             pos_mayor[i]=i;
          }
       }
    
     printf("El numero mayor es el %d en la posicion %d\n",mayor,pos_mayor[i]);

  
  system("PAUSE");	
  return 0;
}
