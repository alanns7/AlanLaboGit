#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numeroLegajo;
  int promedio;
  int aprobados=0;
  int diciembre=0;
  int marzo=0;
  int inicial=0;
  int mayor;
  int legajoPromedio=0;
  char respuesta='s';
  char nombre[30];
  char nombrePromedio[30];  
  
  
  while(respuesta=='s')
  {  
     printf("Ingrese numero de legajo\n");
     scanf("%d",&numeroLegajo);
     fflush(stdin);
  
     printf("Ingrese nombre\n");
     gets(nombre);
     fflush(stdin);
  
     printf("Ingrese promedio\n");
     scanf("%d",&promedio);
     fflush(stdin);
     
     if (inicial=0)
        {
         mayor=promedio;
         inicial=1;
        }
        
     if (promedio>mayor)
        { 
         mayor=promedio;
         strcpy(nombrePromedio,nombre);
         legajoPromedio=legajoPromedio+numeroLegajo;
        }
        
     if(promedio>=7)
        aprobados++;
  
     if(promedio<7 && promedio>=4)
        diciembre++;
  
     else
  
        marzo++;
        
     printf("Desea ingresar nuevo alumno?\n");
     scanf("%s",&respuesta);
 
 
 }
  
  printf("Los alumnos aprobados son: %d\n",aprobados);
  printf("Los alumnos que rinden en diciembre son: %d\n",diciembre);
  printf("Los alumnos que rinden en marzo son: %d\n\n",marzo);
  
  printf("El alumno con mejor promedio es %s con legajo n° %d y con promedio de %d\n",nombrePromedio,legajoPromedio,mayor);
  
  
  
  system("PAUSE");	
  return 0;
}
