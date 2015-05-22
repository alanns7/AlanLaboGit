#include <stdio.h>
#include <stdlib.h>
#include "libre.h"
#define MAX_LIBROS 5001

//NUEVA FUNCION (opciones)
int opciones()
{
 int op;
 printf("\nElija una opcion:\n 1.ALTAS\n 2.MODIFICAR\n 3. BAJA\n 4.PRESTAMO\n 5.DEVOLUCION\n 6.INFORMAR\n 7.LISTAR LIBROS\n 8. SALIR\n");
 printf("\n");
 scanf("%d",&op);
 fflush(stdin);
 return op;
}
//NUEVA FUNCION (alta)
void alta(int limite,int codigoLibro[], char titulo[][80], char autor[][50], int estadoLibro[],int cuenta_alta)
{
 char respuesta;
 
 int aux_codigoLibro,i; 
 char aux_titulo[100], aux_autor[70];
 
 printf("\nALTA\n");
 
 do
 {
  printf("\nIngrese codigo de libro\n");
  scanf("%d",&aux_codigoLibro);
  fflush(stdin);
                           //valida codigo
  while(aux_codigoLibro<0 || aux_codigoLibro>5000)
  {
    printf("\nError, reingrese\n");
    scanf("%d",&aux_codigoLibro);
    fflush(stdin);                    
  }
  codigoLibro[cuenta_alta]=aux_codigoLibro;
  
  printf("\n");
  printf("\nIngrese titulo de libro\n");
  gets(aux_titulo);
  fflush(stdin);
                         //valida titulo
  while(strlen(aux_titulo)>80)
  {
    printf("\n");
    printf("\nError, reingrese titulo\n");
    gets(aux_titulo);
    fflush(stdin);
  }
  strcpy(titulo[cuenta_alta],aux_titulo);
  
  printf("\n");
  printf("\nIngrese autor del libro\n");
  gets(aux_autor);
  fflush(stdin);
                         //valida autor
  while(strlen(aux_autor)>50)
  { 
    printf("\n");
    printf("Error, reingrese autor\n");
    gets(aux_autor);
    fflush(stdin);
  }
  strcpy(autor[cuenta_alta],aux_autor);
  
  estadoLibro[cuenta_alta]=0;
  
  printf("\nDesea ingresar nuevo libro? s/n\n");
  scanf("%c",&respuesta);
  fflush(stdin);

  cuenta_alta++;
 }while(respuesta == 's');      
}

//NUEVA FUNCION (modifica libro)
void modifica(int limite,int aux_codigoLibro,int codigoLibro[], char titulo[][80], char autor[][50])
{
 
 int aux_codigoL,i;
 char aux_titulo[100], aux_autor[70];
 
 printf("MODIFICAR\n");
 
for(i=1;i<limite;i++)
{
 if(aux_codigoLibro==codigoLibro[i])
 {  
  printf("Reingrese codigo de libro\n");
  scanf("%d",&aux_codigoL);
  fflush(stdin);
  
  while(aux_codigoL<0 || aux_codigoL>5000)
  {
    printf("Error, reingrese\n");
    scanf("%d",&aux_codigoL);
    fflush(stdin);
  }
  codigoLibro[i]=aux_codigoL;
  
  printf("Ingrese titulo de libro\n");
  gets(aux_titulo);
  fflush(stdin);
  
  while(strlen(aux_titulo)>80)
  {
    printf("Error, reingrese titulo\n");
    gets(aux_titulo);
    fflush(stdin);
  }
  strcpy(titulo[i],aux_titulo);
  
  printf("Ingrese autor del libro\n");
  gets(aux_autor);
  fflush(stdin);
  
  while(strlen(aux_autor)>50)
  {
    printf("Error, reingrese titulo\n");
    gets(aux_autor);
    fflush(stdin);
  }
  strcpy(autor[i],aux_autor);
  printf("Modificacion exitosa\n");
  
  break;
  } 
 }
}
//NUEVA FUNCION (existe codigo)
int existeCodigo(int aux_codigo, int codigo[], int limite)
{
int i;

 for(i=1;i<limite;i++)
 {
  if(aux_codigo==codigo[i])
  {  
     return 1;
  }
 }
 return 0;
}

//NUEVA FUNCION(presta libros)

void prestamo(int estadoLibro[], int aux_codigoLibro,int codigoLibro[], int codigoPrestado[],int limite,long int aux_dni,long int dni[])
{
   int i, inicial=0;
      
   for(i=1;i<limite;i++) 
   {
     if(aux_codigoLibro==codigoLibro[i])
     {                                
        estadoLibro[i]=1;
        codigoPrestado[i]++;
        
        if(codigoPrestado[i] < 100000)
          {
            while(aux_dni<0 || aux_dni>100000000)
            {
               printf("Error, reingrese dni\n");
               scanf("%d",&aux_dni);
               fflush(stdin);
            }
            dni[i]=aux_dni;
            printf("\nCodigo %d PRESTADO\n",aux_codigoLibro);
            break;
          }
        else
            {
               printf("Este libro alcanzo los 100000 prestamos, no se puede prestar\n");
               break;
            }
     }                                        
   } 
}











