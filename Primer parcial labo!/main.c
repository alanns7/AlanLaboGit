#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libre.h"
#define MAXLIBROS 5001

int main(int argc, char *argv[])
{  
 int i, j, codigoLibro[MAXLIBROS], cantidadPrestamos[MAXLIBROS],cuenta_alta=0;
 char titulo[MAXLIBROS][80], autor[MAXLIBROS][50], prestado;
 int aux_codigoLibro, aux;
 int estadoLibro[MAXLIBROS],cantPrestamo=0;        //ESTADOLIBRO: -1= no ingresado
 int codigoPrestado[MAXLIBROS];                                  //0= en alta
 char aux2[80];                                                  //1= prestado
 long int dni[MAXLIBROS];
 int opcion;
 
    for(i=0;i<MAXLIBROS;i++)
    {
      estadoLibro[i]=-1;
    }
    opcion=opciones();
    
    while(opcion!=8)
    {
    switch(opcion)
    {
     case 1:
            cuenta_alta++; 
            alta(MAXLIBROS, codigoLibro, titulo, autor, estadoLibro, cuenta_alta);
            break;
    
     case 2:

            printf("MODIFICAR LIBRO\n");
            printf("\n");
            printf("Ingrese codigo de libro a modificar\n");
            scanf("%d",&aux_codigoLibro);
            fflush(stdin);
            while(existeCodigo(aux_codigoLibro, codigoLibro, MAXLIBROS)==0)
            { 
              printf("\n");
              printf("El codigo no existe, reingrese codigo\n");
              scanf("%d",&aux_codigoLibro);  
            }                   
            if(existeCodigo(aux_codigoLibro, codigoLibro, MAXLIBROS)==1)
            { 
            printf("El codigo existe\n");
            modifica(MAXLIBROS,aux_codigoLibro,codigoLibro,titulo,autor);
            }
            break;
            
     case 3:
            printf("BAJA LIBRO\n");
            printf("\n");
            printf("Ingrese codigo libro a bajar\n");
            fflush(stdin);
            scanf("%d",&aux_codigoLibro);
            
            while(existeCodigo(aux_codigoLibro, codigoLibro, MAXLIBROS)==0)
            {  
             printf("Codigo no encontrado, reingrese\n");
             scanf("%d",&aux_codigoLibro);             
            } 
             for(i=1;i<MAXLIBROS-1;i++) 
              {
                 if(aux_codigoLibro==codigoLibro[i])
                 {
                 codigoLibro[i]=0;
                 strcpy(titulo[i]," ");
                 strcpy(autor[i]," ");
                 estadoLibro[i]=-1;
                 }
            }                          
             printf("Codigo %d dado de baja correctamente\n",aux_codigoLibro);                                       
             break;
            
      case 4:
             printf("PRESTAMO LIBRO\n");
             printf("\n");
             printf("Ingrese codigo de libro a prestar\n");
             scanf("%d",&aux_codigoLibro);
             while(existeCodigo(aux_codigoLibro, codigoLibro, MAXLIBROS)==0)
             {  
                printf("Codigo no encontrado, reingrese\n");
                scanf("%d",&aux_codigoLibro);   
             } 
             
             prestamo(estadoLibro, aux_codigoLibro, codigoLibro, codigoPrestado, MAXLIBROS);
             cantPrestamo++;
             break;
            
     case 5:
             printf("Devolucion\n"); 
             printf("\n");
             printf("Ingrese codigo de libro a devolver\n");
             scanf("%d",&aux_codigoLibro);
            
             while(existeCodigo(aux_codigoLibro, codigoLibro, MAXLIBROS)==0)
             {  
                printf("Codigo no encontrado, reingrese\n");
                scanf("%d",&aux_codigoLibro);;   
             } 
            
             for(i=0;i<MAXLIBROS;i++)
             {
               if(aux_codigoLibro==codigoLibro[i])
               {
                 estadoLibro[i]=0;
                 printf("Libro %d devuelto\n",codigoLibro[i]);
                 break;
               }
             } 
             break;
      
      case 6:
             printf("Informar\n");
             for(i=1;i<MAXLIBROS-1;i++)
             {
               for(j=i+1;j<MAXLIBROS;j++)
               { 
                 if(codigoPrestado[i]<codigoPrestado[j])
                 {
                   aux=codigoLibro[i];
                   codigoLibro[i]=codigoLibro[j];
                   codigoLibro[j]=aux;
                 
                   strcpy(aux2,titulo[i]);
                   strcpy(titulo[i],titulo[j]);
                   strcpy(titulo[j],aux2);
                 
                   strcpy(aux2,autor[i]);
                   strcpy(autor[i],autor[j]);
                   strcpy(autor[j],aux2);
                   
                   aux=estadoLibro[i];
                   estadoLibro[i]=estadoLibro[j];
                   estadoLibro[j]=aux;
                 }
               }
             } 
              if(codigoPrestado[1]>0)
              {
                printf("Los datos de el/los libros mas prestados son:\n Codigo: %d\t\t Titulo: %s\t\t Autor: %s\n",codigoLibro[1],titulo[1],autor[1]); 
             
                for(i=2;i<MAXLIBROS;i++)
                {  
                  if(codigoPrestado[1] == codigoPrestado[i])
                  {                      
                   printf("Codigo: %d\t\t Titulo %s\t\t Autor: %s\n",codigoPrestado[i],titulo[i],autor[i]);
                  }
                  break;
               }
             } 
             else
             {
               printf("No se prestaron libros\n");
             } 
         
             printf("El total de los libros prestados son: %d\n",cantPrestamo);
             break;
            
      case 7:
             printf("Listar libros\n");
     
             for(i=1;i<MAXLIBROS-1;i++)
             {
               for(j=i+1;j<MAXLIBROS;j++)
               {
                 if(strcmp(titulo[i],titulo[j])==1)
                 {
                    strcpy(aux2,titulo[i]);
                    strcpy(titulo[i],titulo[j]);
                    strcpy(titulo[j],aux2);
                    
                    aux=codigoLibro[i];
                    codigoLibro[i]=codigoLibro[j];
                    codigoLibro[j]=aux;
                   
                    strcpy(aux2,autor[i]);
                    strcpy(autor[i],autor[j]);
                    strcpy(autor[j],aux2);
                    
                    aux=estadoLibro[i];
                    estadoLibro[i]=estadoLibro[j];
                    estadoLibro[j]=aux;
                 }
               }
             }   
             
             printf("\n");
             printf("Titulos prestados: \n");   
             for(i=1;i<MAXLIBROS;i++)
             {
                if(estadoLibro[i]==1)
                { 
                   printf("%s\n",titulo[i]);
                }     
             }
             printf("\n");
             printf("Titulos en biblioteca:\n");  
             printf("\n");          
             for(i=1;i<MAXLIBROS;i++)
             {
                if(estadoLibro[i]==0)
                {
                   printf("%s\n",titulo[i]);
                }
             }
        
             break;           
       }   
     opcion=opciones(); 
    }
  system("PAUSE");	
  return 0;
}
