#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float valorHora;
char nombre[100];
char antiguedad;
int horasMes;
float resultado;

printf("\nNombre>");
scanf("%s",&nombre);
fflush(stdin);

printf("\nAntiguedad>");
scanf("%c",&antiguedad);
fflush(stdin);
  
  printf("\nHoras Mes>");
  scanf("%d",&horasMes);
  fflush(stdin);
  
   printf("\nValor Hora>");
  scanf("%d",&valorHora);
  fflush(stdin);
  
  resultado=(valorHora*horasMes) + (antiguedad*30);
  printf("El empleado %d cobra: $ %f",nombre,resultado);
  
  
  
  system("PAUSE");	
  return 0;
}
