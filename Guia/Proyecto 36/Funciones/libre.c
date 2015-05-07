#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

void valida_sueldo(float sueldo)
{
  if(sueldo<0)
  {    
     printf("\nError, reingrese sueldo");
     scanf("%d",&sueldo);
  }  
}     
