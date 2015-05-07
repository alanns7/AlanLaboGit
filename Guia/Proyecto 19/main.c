#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int total;
  char numero;
  int importe, importe1, importe2, importe3;
  int subtotal;
  int i;
  char respuesta='s';
  
  for(i=0;i<3;i++)
 {
   do
     {  
      printf("ingrese numero de vendedor\n");
      scanf("%d",&numero);
      fflush(stdin);
      
      if(numero=='0')
      break;
      
      printf("ingrese importe\n");
      scanf("%d",&importe);
      fflush(stdin);
      
      if(i==0)
      importe1=importe;
      
      if(i==1)
      importe2=importe;
      
      if(i==2)
      importe3=importe;
       
      printf("desea ingresar nueva boleta?\n");
      scanf("%c",&respuesta);
      
     }while(respuesta!='s');
 }
  subtotal=importe*0.5;
  total=importe+subtotal;
  printf("Su saldo es de: $ %d",total);
  
  
  system("PAUSE");	
  return 0;
}
