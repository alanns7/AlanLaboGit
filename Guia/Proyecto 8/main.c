#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 char contadorA=0;
 char contadorE=0;
 char contadorI=0;
 char contadorO=0;
 char contadorU=0;
 int ingreso;
 char i;
 
 //printf("ingrese caracteres");
 for(i=0;i<20;i++)
 {  
    printf("Ingrese caracter\n>");              
    scanf("%c",&ingreso);
    fflush(stdin);//suprime los caracteres ingresados por el usuario despues del primero 
    //ingreso=tolower(ingreso); para pasar a minuscula
    switch(ingreso) 
   {
                 
    case'a':
    case'A':
       contadorA=contadorA+1; 
       break;
  
    case'e':
    case'E':
 
       contadorE=contadorE+1;    
       break;
  
   case'i':
   case'I':
 
       contadorI=contadorI+1;    
   break;
  
   case'o':
   case'O':
 
       contadorO=contadorO+1;    
  break;
  
 
  case'u':
  case'U':
 
   contadorU=contadorU+1;    
   break;
  }  
 } 
   system("cls");//para limpiar la pantalla;
   printf("La cantidad de letras A: %d - E:%d - I:%d - O:%d - U:%d", contadorA,contadorE,contadorI,contadorO,contadorU); 
   
  system("PAUSE");	
  return 0;
}
