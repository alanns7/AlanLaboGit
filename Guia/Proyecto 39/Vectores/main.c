#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int dia[30], compra[30], compra_aux=0, mayor[30], i, inicial=0, pos_mayor=0;
    char respuesta='s';
    
    
    for(i=1;i<30;i++)
    {
    
            printf("Ingrese gasto en compra en dia %d\n",i);
            scanf("%d",&compra[i]);
            fflush(stdin);
            
            printf("Desea seguir ingresando compra en dia %d ?\n",i);
            scanf("%c",&respuesta);
            fflush(stdin);
            
            while(respuesta=='s')
            {     
                  printf("Ingrese gasto en compra en dia %d\n",i);
                  scanf("%d",&compra_aux);
                  fflush(stdin);
                  compra[i]=compra[i]+compra_aux;
                  
                  printf("Desea seguir ingresando compra en dia %d ?\n",i);
                  scanf("%c",&respuesta);
                  fflush(stdin);
            }
            
            
            if(inicial==0)
            {
             mayor[i]=compra[i];
             pos_mayor=pos_mayor+i;
             inicial=1;
            }
            
            if (compra[i]>mayor[i])
               {   
                mayor[i]=compra[i];
                pos_mayor=0;
                pos_mayor=pos_mayor+i;
               }
    }      
    
    printf("El dia de mayor gasto fue el %d\n,",pos_mayor);
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
