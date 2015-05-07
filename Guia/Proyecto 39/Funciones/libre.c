#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

int validaS_N(char respuesta)

{ if(respuesta=='s')
  {
     respuesta=tolower(respuesta);
     return '1';
  }
  
  if(respuesta=='n')
  {
     respuesta=tolower(respuesta);
     return '0';
  }
  
  else
  {
     printf("Error, Continua? S/N\n");
     scanf("%c",&respuesta);
  } 
}
