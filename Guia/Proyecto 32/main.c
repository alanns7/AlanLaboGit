#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
fflush(stdin);
{  
   int numeroSocio;
   int edad;
   int contadorTenis=0;
   int contadorRugby=0;
   int contadorVoley=0;
   int contadorHockey=0;
   int contadorFutbol=0;
   int edadTenis=0,promedioTenis;
   int edadRugby=0,promedioRugby;
   int edadVoley=0,promedioVoley;
   int edadHockey=0,promedioHockey;
   int edadFutbol=0,promedioFutbol;
   char respuesta[]={"si"};
   char nombre[30];
   char deporte;
   
   
 
   if(strcmp(respuesta,"si")==0)
    {    
         printf("ingrese numero de socio\n");
         scanf("%d",&numeroSocio);
         fflush(stdin);
         
         printf("Ingrese nombre y apellido\n");
         gets(nombre);
         fflush(stdin);
         
         printf("ingrese edad\n");
         scanf("%d",&edad);
         fflush(stdin);
         
         printf("ingrese deporte\n");
         printf("1.Tenis\n");
         printf("2.Rugby\n");
         printf("3.Voley\n");
         printf("4.Hockey\n");
         printf("5.Futbol\n");
         scanf("%d",&deporte);
         fflush(stdin);
         
         
         
         switch(deporte)
         {
           case 1:
                contadorTenis++;
                edadTenis=edadTenis+edad;
                break;
                
           case 2:
                contadorRugby++;
                edadRugby=edadRugby+edad;
                break;
                
           case 3:
                edadVoley=edadVoley+edad;
                break;
                
           case 4:
                edadHockey=edadHockey+edad;
                break;
                
           case 5:
                edadFutbol=edadFutbol+edad;
                break;
          }      
         
           printf("Desea ingresar nuevo socio?\n");
           scanf("%s",respuesta);
           fflush(stdin);
   
     }   
   
     promedioTenis=edadTenis/contadorTenis;
     promedioRugby=edadRugby/contadorRugby;
     promedioVoley=edadVoley/contadorVoley;
     promedioHockey=edadHockey/contadorHockey;
     promedioFutbol=edadFutbol/contadorFutbol;
   
   printf("La cantidad de socios practicantes de Tenis son: %d\n",contadorTenis);
   printf("La cantidad de socios practicantes de Rugby son: %d\n\n",contadorRugby);
   printf("El promedio de Tenis es \n",promedioTenis);
   printf("El promedio de Rugby es \n",promedioTenis);
   printf("El promedio de Voley es \n",promedioTenis);
   printf("El promedio de Hockey es \n",promedioTenis);
   printf("El promedio de Futbol es \n",promedioTenis);
   
   
  system("PAUSE");	
  return 0;
}
