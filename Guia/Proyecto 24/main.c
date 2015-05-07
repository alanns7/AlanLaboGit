#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[30];
  float altura;
  char respuesta='s';
  char inicial=0;
  float alto;
 

   while(respuesta=='s')
  {
      printf("ingrese su nombre completo\n>");
      gets(nombre);
      fflush(stdin);
      
      printf("ingrese su altura\n>");
      scanf("\n%f",&altura);
      fflush(stdin);
    
    if (inicial=0)
    {   
        alto=altura;
        inicial=1;
    }
    
    if (altura>alto)
        alto=altura;
    
    printf("Desea ingresar otro alumno?\n");
    getch(respuesta);
    fflush(stdin);
    
    }
    
    printf("El alumno mas alto es: %d con %.2f m de altura\n",nombre,alto);
  
  
  system("PAUSE");	
  return 0;
}
