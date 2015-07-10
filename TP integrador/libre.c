#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libre.h"



ArrayList* newArrayList()
{// Constructor
	ArrayList* pAuxArrayList;
	pAuxArrayList = (ArrayList*) malloc(sizeof(ArrayList));

	pAuxArrayList->elements =(int*)malloc(sizeof(int));
	pAuxArrayList->size=0;
	
	pAuxArrayList->add = add;
	pAuxArrayList->deleteArrayList = deleteArrayList;
    pAuxArrayList->removee = removee;
	pAuxArrayList->set = set;
	pAuxArrayList->get = get;
    pAuxArrayList->push = push;
	pAuxArrayList->pop = pop;
	pAuxArrayList->indexOf = indexOf;
	pAuxArrayList->getSize = getSize;
	pAuxArrayList->contains = contains;
	pAuxArrayList->containsAll = containsAll;
	pAuxArrayList->isEmpty = isEmpty;
    pAuxArrayList->clone = clone;
    pAuxArrayList->subList = subList;
	pAuxArrayList->clear = clear;
	

	return pAuxArrayList;

}




int resizeUp(ArrayList* pArray)//hace crecer el array
{
	void* tmp_ptr;
	pArray->size++;
	tmp_ptr = realloc(pArray->elements,(sizeof(int))*(pArray->size+1)); //realloc:	aumenta o disminuye el tamaño del bloque 
                                                                        //          de memoria especificada. Reasigna si es necesario                         
	if (tmp_ptr == NULL) {
		printf("Error");
		return 0;
	}
	else {
	
		pArray->elements = tmp_ptr;
		
		return 1;
	}
}




//FUNCIONES A-Z





void add(ArrayList* self,int aux)//agrega un elemento al final del arrayList
{
	self->elements[self->size] = aux;
	resizeUp(self);
}




void clear (ArrayList* self )//Borra todos los elementos del arrayList
{
    int i;
	for(i=0;i<self->size;i++)
    {
		free((int*)self->elements[i]); 
	}
	self->size=0;
}




ArrayList* clone(ArrayList* self)//Retorna un nuevo arrayList copia del arrayList original
{
    int i; 
		
    ArrayList* pAux = self;
       
    return pAux; 
}




int contains (ArrayList* self , void* element)//Comprueba si existe el elemento que se le pasa como parámetro.
{
    int i;
	
    for(i=0;i<self->size;i++)
       {
		 if(self->elements[i]==*((int*)element))
          {
	       return 1;
          }
       }	
    return 0;
}




int containsAll (ArrayList* self , ArrayList* array)//Comprueba si los elementos pasados son contenidos por el arrayList.
{
    int i;
    
    
	   for(i=0;i<array->size;i++)
       {
       if(array->elements[i]==*((int*)self->elements))	
         {
            return 1;
            break;
		 }
	   }
	  return 0;
}




void deleteArrayList (ArrayList* self)//Elimina el arrayList          //self= puntero al array
{
   free(self);    
}
        
        
  

int* get(ArrayList* self,int index)//Retorna un puntero al elemento que se encuentra en el indice especificado.
{   
    if(self->size>=index)
       {
        return (int*)self->elements[index];
       }   
    
    else
       {
        printf("El indice especificado no se encuentra");
       }
        
}  




int getSize (ArrayList* self )//Retorna el tamaño del ArrayList.
{
    return self->size;
}
  
  
    
       
int indexOf (ArrayList* self , void* element)//Retorna el indice de la primera aparición de un valor en el ArrayList.
{
    int i;
	for(i=0;i<self->size;i++)
       {
		if(self->elements[i]==*((int*)element))
          {
           printf("La primera aparicion del elemento %d fue en el indice %d\n",*((int*)element),i);                                    
		   return i;
		   break;
	      }
 
        if(self->size== i && self->elements[i]!= *((int*)element))  //ver
          {
           printf("El valor no se encuentra en la lista");	   
          }
      }
}






int isEmpty (ArrayList* self)//Retorna 0 si contiene elementos y 1 si no los tiene.
{
    if(self->size==0)
    {
		return 1;
	}
    return 0;
}






ArrayList* pop (ArrayList* self , int index)//Retorna un puntero al elemento que se encuentra en el indice especificado
{                                      // y luego lo elimina de la lista.          
    
    void* puntero;
	
    if(self->size>=index)
      {  
        puntero=(ArrayList*)self->elements[index];
	    removee(self, index);
	    return puntero;
      }
      
    return NULL;
}




void push (ArrayList* self,int index, void* element)//Desplaza a los elementos e inserta en la posición index.  
{                            //index= posicion, element= valor del elemento.           
    int i;   
      
    if(self->size>=index)
      {
       resizeUp(self);
       
       for (i=self->size;i>=index;i--)
   	      {
			self->elements[i]=self->elements[i-1];
		  }
    
       self->elements[index]=*((int*)element);
      }
        	
 	
}       
       
                                 
  
                                              
void removee (ArrayList* self, int index)//Elimina un elemento en ArrayList en el indice especificado.
{
  int i;
  int* aux;
  
  aux=&self->elements[1];
  
 for(i=index;i<=self->size;i++)
    {
     self->elements[i]=self->elements[i+1];      
    }
	 
   
   self->size--;
   
}


 
 
 
                           //index=indice           
void set (ArrayList* self , int index, void* element)//Inserta un elemento en arrayList en el indice especificado.
{
     if(self->size>=index)
       {
        self->elements[index]=*((int*)element);
       }
    
}





ArrayList* subList (ArrayList* self, int from, int to )//Retorna un nuevo arrayList con el subconjunto de elementos.
{
     int i; 
		
    ArrayList* paux;
       
       
        paux = newArrayList();
 
          
          for(i=from; i<=to; i++)
            {       
              paux->add(paux,self->elements[i]);              
            }
       
        return paux;
         
         
}




