#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

void validacion_num(int numero)

{
       if (numero<-100 || numero>100)
       {
        printf("\nError, reingrese numero");
        scanf("%d",&numero);
       }
}      
       
       
