#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ char nombre[30];
  int tarifa;
  int horas;
  char respuesta='s';
  char i;
  int contadorTarifa=0;
  int contadorHoras=0;
  int salarioSemanal;
  
 for(i=0;i<7;i++)
 {   
    while(respuesta=='s')  
   {  
    printf("Ingrese nombre\n");
    gets(nombre);
    
    printf("\nIngrese tarifa horaria\n");
    scanf("\n%d",&tarifa);
    contadorTarifa = contadorTarifa + tarifa;
    
    printf("Ingrese horas trabajadas\n");
    scanf("\n%d",&horas);
    contadorHoras = contadorHoras + horas;
   
    printf("Si quiere ingresar nuevo dia presione s\n");
    scanf("\n%c",&respuesta); 
  
   }   
 }  
 
  salarioSemanal=((contadorHoras*contadorTarifa)*7);
  
  printf("El salario semanal es de %d\n",salarioSemanal);


  system("PAUSE");	
  return 0;
}
