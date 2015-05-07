#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char numero;
  char respuesta='s';
  
  while(respuesta=='s')
  {
   printf("Ingrese un numero\n");
   scanf("%c",&numero);
   fflush(stdin);
   
   switch(numero)
   {  
    case'1':
    printf("Lunes\n");
    break;
    
    case'2':
    printf("Martes\n");
    break;
    
    case'3':
    printf("\nMiercoles>");
    break;
    
    case'4':
    printf("Jueves\n");
    break;
    
    case'5':
    printf("Viernes\n");
    break;
    
    case'6':
    printf("Sabado\n");
    break;
    
    case'7':
    printf("Domingo\n");
    break;
  } 
  printf("Desea ingresar otro numero?\n");
  scanf("%c",&respuesta);
  fflush(stdin);
  }
  
 
  
  system("PAUSE");	
  return 0;
}
