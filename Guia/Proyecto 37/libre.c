#include <stdio.h>
#include <stdlib.h>
#include "libre.h"
#define c 100
int valida_leg(int legajo[],int i)
{
    while(legajo[i]<0)
    {
      printf("Reingrese legajo");
      scanf("%d",&legajo);
    }
    return legajo[i];
}

void ordenar_nombre(char nombre[])
{
int i,j;
char aux[c];
   for(i=0; i<c-1; i++)
   {
            for(j=i+1; j<c; j++)
             {
              if(strcmp(nombre[i],nombre[j])>0)
               {
                aux=nombre[i];
                nombre[i]=nombre[j];
                nombre[j]=aux;
               }
             }
    }
}
