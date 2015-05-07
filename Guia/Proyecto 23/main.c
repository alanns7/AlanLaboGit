#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float milimetros;
  int i;
  float maximo;
  float minimo;
  float promedio;
  char inicial=0;
  float contador_mm=0;
  char diaMaximo=0;
  char diaMinimo=0;

  for(i=0;i<5;i++)
  {
       printf("ingrese cantidad de agua en mm\n");
       scanf("%f",&milimetros);

       contador_mm = contador_mm + milimetros;

       if(inicial==0)
       {   minimo=milimetros;
           maximo=milimetros;
           inicial=1;
       }

       if(milimetros>maximo)
       {    maximo=milimetros;
            diaMaximo=1*i;
       }

       if(milimetros<minimo)
       {    minimo=milimetros;
            diaMinimo=1*i;
       }  
}
  promedio=contador_mm/30;
  printf("El dia de mayor lluvia es el: %c\n El dia de menor lluvia es el: %c\n Y el promedio es: %.2f\n>",diaMaximo, diaMinimo, promedio);

  system("PAUSE");
  return 0;
}
