#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{ char numeroLegajo;
  char nombre[25];
  int sueldo;
  char sexo;
  char i;
  char hombres;
  char mujeres;
  
  for(i=0;i<3;i++)
  
  { printf("ingrese numero de legajo\n");
    scanf("\n%c",&numeroLegajo);
    fflush(stdin);
                  
    printf("ingrese nombre\n");
    gets(nombre);
    fflush(stdin);
    
    printf("ingrese sueldo\n");
    scanf("\n%d",&sueldo);
    fflush(stdin);
    
    printf("ingrese sexo\n");
    scanf("\n%c",&sexo);
    fflush(stdin);
    
    if (sexo=='f' && sueldo>500)
      mujeres++;
      
    if (sexo=='m' && sueldo<400)
      hombres++;
  }      
      printf ("Las mujeres que ganan mas de $500 son %c y los hombres que ganan menos de $400 son %c",mujeres,hombres);
        
  
  
  system("PAUSE");	
  return 0;
}
