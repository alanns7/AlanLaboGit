#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char respuesta='s';
  char operacion;   
  float num1;
  int num2;  
  float resultado;
    
    while(respuesta=='s')
    {
      printf("Elija operacion matematica:\n");
      printf("1.Suma\n");
      printf("2.Resta\n");
      printf("3.Multiplicacion\n");
      printf("4.Division\n");
      scanf("%d",&operacion);
      fflush(stdin);
      printf("Escriba dos numeros\n");
      scanf("%f %d",&num1,&num2);
      fflush(stdin);
         
         switch(operacion)
        {
           case 1:
           resultado=num1+num2;
           break;
          
           case 2:
           resultado=num1-num2;
           break;
           
           case 3:
           resultado=num1*num2;
           break;
           
           case 4:
           resultado=num1/num2;
           break;   
        }   
      printf("Su resultado es: %.2f\n",resultado); 
      printf("Desea realizar otra operacion?\n");
      scanf("%c", &respuesta);
      fflush(stdin);
    }
    
  
  system("PAUSE");	
  return 0;
}
