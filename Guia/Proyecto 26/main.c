#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int temperatura;
    char inicial=1;
    int maximo;
    int minimo;
    char respuesta='s';
    int dia;
    int diaFrio;
    int diaCalor;
    
    while(respuesta=='s')
    {
     printf("Ingrese dia\n");
     scanf("\n%d",&dia);
     
     printf("Ingrese temperatura\n");
     scanf("\n%d",&temperatura);
    
     if (inicial=0)
     {
         maximo=temperatura;
         minimo=temperatura;
         inicial=1;
     }
    
     if (temperatura>=maximo)
     {
         maximo=temperatura;
         diaCalor=dia;
     }
     if (temperatura<=minimo)
     {
         minimo=temperatura;
         diaFrio=dia;
     }
    
     printf("Desea ingresar otro dia?\n");
     scanf("\n%c",&respuesta);
     }
  
  printf("El dia mas frio fue el: %d con temperatura de: %d\n",diaFrio,minimo);
  printf("El dia mas caluroso fue el: %d con temperatura de: %d\n",diaCalor,maximo);
  
  
  system("PAUSE");	
  return 0;
}
