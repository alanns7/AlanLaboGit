#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float base;
  float altura;
  float superficie;
  
  printf("ingrese base\n");
  scanf("%f",&base);
  
   printf("ingrese altura\n");
   scanf("%f",&altura);
  
  superficie=(base*altura)/2;
  
  printf("La superficie del triangulo es de %.2f cm \n",superficie);
  
  
  system("PAUSE");	
  return 0;
}
