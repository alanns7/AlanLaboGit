#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char nombre[30];
    int inteligencia;
    int cultura;
    int belleza;
    char i;
    int suma;
    char mayor=0;
    int acumuladorInteligencia=0;
    int acumuladorCultura=0;
    int acumuladorBelleza=0;
    int acumulador;
    char menorPuntaje[50];
    
    for(i=0;i<3;i++)
    {
       printf("ingrese nombre\n");
       gets(nombre);
       fflush(stdin);
       
       printf("ingrese puntos de inteligencia\n");
       scanf("%d", &inteligencia);
       fflush(stdin);
       acumuladorInteligencia = acumuladorInteligencia + inteligencia;
       
       printf("ingrese puntos por cultura general\n");
       scanf("%d", &cultura);
       fflush(stdin);
       acumuladorCultura = acumuladorCultura + cultura;
       
       printf("ingrese puntos por belleza\n");
       scanf("%d", &belleza);
       fflush(stdin);
       acumuladorBelleza = acumuladorBelleza + belleza;
       
       
       suma=inteligencia + cultura + belleza;
       
       if(suma>mayor)
       mayor=mayor+suma;
       
    }
    acumulador = acumuladorInteligencia + acumuladorCultura + acumuladorBelleza;
    
    if (acumuladorInteligencia<acumuladorCultura &&  acumuladorInteligencia<acumuladorBelleza)
        strcpy(menorPuntaje,"Inteligencia");
    
    if (acumuladorCultura<acumuladorInteligencia &&  acumuladorCultura<acumuladorBelleza)
        strcpy(menorPuntaje,"Cultura");
        
    if (acumuladorBelleza<acumuladorCultura &&  acumuladorBelleza<acumuladorInteligencia)
        strcpy(menorPuntaje,"Belleza");
    
    
    printf("El mayor puntaje general es de %s con %d\n",nombre,mayor);
    printf("El puntaje acumulado es de %d\n", acumulador);
    printf("El menor puntaje acumulado es el de: %s\n",menorPuntaje);
  
  system("PAUSE");	
  return 0;
}
