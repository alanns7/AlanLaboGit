#include <stdio.h>
#include <stdlib.h>
#include "libre.h"
#define c 100
int main(int argc, char *argv[])
{
  char nombre[c][50], rta='s';
  int leg[c][50], hora, i=0; //ver tp github
    
  do
  {  
  printf("Ingrese nombre");
  gets(nombre[i]);
  printf("Ingrese legajo");
  scanf("%d",&leg[i]);
  //leg[i]=valida_legajo(leg[],i);
  printf("Ingrese hora");
  scanf("%d",&hora);
  
  printf("Desea seguir");
  rta=tolower(getche());
  i++;
  }while(rta=='s');
  
  
  system("PAUSE");	
  return 0;
}
