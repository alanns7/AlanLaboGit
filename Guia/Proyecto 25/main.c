#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[30];
  float promedio;
  char respuesta='s';
  char nota1, nota2, nota3, nota4, nota5, nota6;
  float suma;
  
  
  while(respuesta=='s')
  
  {
   printf("Inrgese nombre\n");
   scanf("%s",nombre);
   fflush(stdin);
   
   printf("\nIngrese notas\n");
   scanf("%c\n %c\n %c\n %c\n %c\n %c\n",&nota1, &nota2, &nota3, &nota4, &nota5, &nota6);
   fflush(stdin);
   
   suma= (nota1 + nota2 + nota3 + nota4 + nota5 + nota6);  
   promedio=suma/6;
   
   printf("Nombre: %s\t\t\t Promedio %.2f\n\n",nombre,promedio);
   printf("Desea ingresar otro alumno?\n");
   scanf("%c",&respuesta);
  }
 
  system("PAUSE");	
  return 0;
}
