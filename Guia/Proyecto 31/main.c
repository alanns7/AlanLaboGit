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
  int empleado=0;
  char inicial=0;
  int mayorSalario=0;
  int menorSalario=0;
  char nombreMayorSalario[30];
  char nombreMenorSalario[30];
  int salarioTotal=0;
  int promedio;
 
  while (respuesta=='s')
 {   empleado++;

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
   
    printf("Si quiere ingresar nuevo dia presione s\n");//no hace falta, solo esta puesto porque lo pide el ejercicio!
    scanf("\n%c",&respuesta); 
  
   }   
  }  

  salarioSemanal=((contadorHoras*contadorTarifa)*7);//suponiendo que se trabaja todos los dias, sino seria *i.
  
  printf("El salario semanal es de %d\n",salarioSemanal);
  
    if (inicial=0)
     {          
                mayorSalario = mayorSalario + salarioSemanal;
                menorSalario = menorSalario + salarioSemanal;
                inicial=1;
     }
     
  if (salarioSemanal>mayorSalario)
     {
                mayorSalario=salarioSemanal;
                strcpy(nombreMayorSalario,nombre);
     }
     
  if (salarioSemanal<menorSalario)
     {
                menorSalario=salarioSemanal;
                strcpy(nombreMenorSalario,nombre);
     }
                   
   printf("Desea ingresar nuevo usuario?\n");
   scanf("\n%c",&respuesta);
   
   }
   
   salarioTotal=salarioTotal+salarioSemanal;
   promedio=salarioTotal/empleado;
   
   
  printf("La cantidad de empleados registrados es: %d\n", empleado);
  printf("El empleado con mayor salario es: %s con $ %d\n",nombreMayorSalario,mayorSalario);//puts(nombreMayorSalario)  no funciona;
  printf("El empleado con mayor salario es: %s con $ %d\n",nombreMayorSalario, menorSalario);
  printf("El salario total de los empleados es: %d y el promedio es: %d\n",salarioTotal,promedio);
  
  
  
  
  system("PAUSE");	
  return 0;
}
