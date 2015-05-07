#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float pulgada=2.54;
    float cms, pulgadas;
    float pie=12*pulgada;
    int pies;
    
    
    printf("ingrese cms: \n");
    scanf("%f",&cms); 
    
    pulgadas=cms/pulgada;
    pies=cms/pie;
    
    printf("%.2f cm son %d pies y %.1f pulgadas\n", cms, pies, pulgadas);
  
  system("PAUSE");	
  return 0;
}



