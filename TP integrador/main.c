#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libre.h"


int main(void){
	char resp[2];
	int aux, aux2;
	int c;
	int op;
	int i=0;
	int from;
	int to;
	int* pElemento;
	int valida;
	ArrayList* pLista, auxLista;
    ArrayList* pLista2;

	pLista = newArrayList();
	pLista2= newArrayList();
	
	 
     
     
     while(op!=18)
     {
			printf("\n 1.add\n 2.deleteArray\n 3.removeElemento\n 4.get\n"); 
			printf(" 5.set\n 6.push*\n 7.pop*\n 8.IndexOf\n 9.Size\n");
            printf(" 10.contains\n 11.containsAll\n 12.isEmpty\n 13.clone\n 14.subList\n");
            printf(" 15.clear*\n 16.Mostrar array\n 17.Mostrar array2\n 18.Salir\n\nElija opcion:\n\n ");
            scanf("%d",&op);
            printf("\n");
			fflush(stdin);
		
        
        switch(op)
        {
			
            case 1://add
                   
                   printf("Ud. selecciono: ALTA\n");
                   
                   do
                    {
                     printf("\n");
				     printf("indique un numero: ");
		             scanf("%d",&aux);
		             /* para que no sea una letra
                       
                     valida=aux/aux;
                     
                     while(valida!=1) 
                          {
                           printf("Ud ha introducido un caracter, ingrese un numero");
                           scanf("%d",&aux);
                          }*/
                     
		             pLista->add(pLista,aux);
                     
                     printf("\n");
		             printf("quieres agregar otro numero? s/n: ");
		             scanf("%s",resp);
                     
	                }while(strcmp(resp,"s")==0);
                    break;
                
			
            
            
            
            case 2://deleteArray
				   
                   printf("Ud. selecciono: DELETE ARRAY\n");
                   printf("\n");
                   deleteArrayList(pLista);
				   printf("ArrayList borrado\n");
				   printf("\n");
				   break;
				
			
            
            
            
            case 3://remove
			       
			       printf("Ud. selecciono: REMOVE\n");
			       printf("\n");
                   printf("Indique indice para eliminar elemento\n");
                   scanf("%d",&aux);
                   pLista->removee(pLista,aux);
				   printf("Elemento borrado\n");
				   
                   break;
			
           
           
           
            case 4://get
                  
                   printf("Ud. selecciono: GET\n");
                   printf("\n");
                   printf("Indique indice para saber elemento\n");
                   scanf("%d",&aux);
                   pElemento=pLista->get(pLista, aux);
                   printf("El elemento del indice buscado es %d\n",pElemento);
                   printf("\n");
           
                   break;
           
           
            
            
            case 5://set
                   
                   printf("Ud. selecciono: SET\n");
                   printf("\n");
                  
                   printf("indique elemento a colocar: ");
		           scanf("%d",&aux);
		           printf("\n");
		          
                   printf("indique el indice: ");
		           scanf("%d",&aux2);
		           printf("\n");
		           
                   pElemento=&aux;
				   pLista->set(pLista,aux2,pElemento);
				   
				   printf("Elemento agregado correctamente\n");
				   printf("\n");
				   break;
		
        
        
        	
            
            case 6://push
                  
                   printf("Ud. selecciono: PUSH\n");
                   printf("\n");
                   
                   printf("indique el nuevo valor al elemento: ");
		           scanf("%d",&aux);
		           printf("\n");
		           
                   printf("indique el indice: ");
		           scanf("%d",&aux2);
		           printf("\n");
		           
				   push(pLista,aux2,((void*)&aux));
				   printf("Valor agregado correctamente\n");
				   printf("\n");
				   break;
			
           
           
            
            
            case 7://pop*
                   
                   printf("\nUd. selecciono: POP\n");
                   printf("\n");
                   printf("indique el indice: ");
		           scanf("%d",&aux2);
				   int* puntero = (int*)pop(pLista,aux2);
				   printf("\n");
				   printf("Elemento borrado\n");
				   printf("\n");
		    	   break;
		
        
        
        	
            
            case 8://IndexOf
                   
                   printf("\nUd. selecciono: INDEX OF\n");
                   printf("\n");
                   printf("indique elemento: ");
		           scanf("%d",&aux);
		           pElemento=&aux;
				   int index = pLista->indexOf(pLista,pElemento);
				   break;
			
            
            
            
            
            case 9://Size
				   
                   printf("Ud. selecciono: SIZE\n");
                   printf("\n");
                   printf("El tamanio del array es: %d\n",pLista->getSize(pLista));
				   break;
			
           
           
           
           
           case 10://contains
			       
			       printf("Ud. selecciono: CONTAINS\n");
			       printf("\n");
                   printf("indique elemento ");
                   scanf("%d",&aux);
                   printf("\n");
		           pElemento=&aux;
				   
                   if(pLista->contains(pLista,pElemento)==1)
				     {
                      printf("El elemento existe\n");
                      printf("\n");
                     }
                   
                   else
                     {
                      printf("El elemento no existe\n");
                      printf("\n");
                     }
		           
                   break;
			
            
            
            
           case 11://containsAll
				    
                   printf("Ud. selecciono: CONTAINS ALL\n"); 
                   printf("\n");
                   
                   if(pLista->containsAll(pLista,auxLista)==1)
                      {
					   printf("El arrayList contiene a los elementos\n");
					   printf("\n");
	                  }
                   else
                      {
					   printf("El arrayList no contiene a los elementos\n");
					   printf("\n");
				      }
                   break;
			
            
           
           
           case 12://isEmpty 
				    
                    printf("Ud. selecciono: IS EMPTY\n");
                    printf("\n");
                    
                    if(pLista->isEmpty(pLista)==1)
				      {
                       printf("El array no contiene elementos\n");
                       printf("\n");
                      }
                    else
                      {
                       printf("El array contiene elementos\n");
                       printf("\n");
                      }
				    break;
			
            
            
            
            
            case 13://ArrayList* clone
                    
                    printf("Ud. selecciono: CLONE\n");
                    printf("\n");
                    pLista2=clone(pLista);
                    printf("Lista clonada en pLista2\n");
                    printf("\n");
                    
				    break;
			
            
            
            
            
            case 14://ArrayList* sublist
            
                    printf("Ud. selecciono: SUBLIST\n");
                    printf("\n");
                    
                    printf("Desde indice: ");
                    scanf("%d",&from);
                    
                    printf("Hasta indice: ");
                    scanf("%d",&to);
	                
                    pLista2 = (ArrayList*)pLista->subList(pLista,from,to);
                    printf("\n");
                    printf("Sublist creado corectamente en ArrayList 2\n");
                    printf("\n");
				    break;
			
           
           
           
            case 15://clear
                    
                    printf("Ud. selecciono: CLEAR\n");
                    printf("\n");
                    pLista->clear(pLista);
                    printf("Elementos borrados\n");
                    printf("\n");
				    break;
			
            
            
            
            case 16://muestra elementos de lista             
				  
                    printf("Ud. selecciono: MOSTRAR ARRAY\n");
                    printf("\n");
                    
                   
                    if(pLista->size==0)
                      {
                       printf("La lista no contiene elementos\n"); 
                       printf("\n");                
                      }
                     
                    else 
                    {
                      printf("Los elementos de la lista son:\n");
                      printf("\n");   
                      
                      for(i=0;i<pLista->size;i++)
                         {
					      printf("%d\n",pLista->get(pLista,i));
				         }	
                    }
        
                    break;
                    
           
            
            
            case 17://Muestra el array 2
                    
                    printf("Ud. selecciono: MOSTRAR ARRAY 2\n");
                    printf("\n");
                    
                     if(pLista2->size==0)
                      {
                       printf("La lista 2 no contiene elementos\n"); 
                       printf("\n");                
                      }
                     
                    else 
                    {
                    printf("Los elementos de la lista 2 son:\n");
                    printf("\n");
                    
                    for(i=0;i<pLista2->size;i++)
                       {
                        printf("%d\n",pLista2->get(pLista2,i));
                       }
                    }
                    
                    break;              
           
           
            case 18://salir
                    
                    op=18;
                    break;
                    
            
		}
		system("pause");
	}

return 0;
}









