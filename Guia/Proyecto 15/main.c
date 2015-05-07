#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int i;
   
 printf("Multiplos de 2\n");

 
 for(i=2;i<100;i=i+2)
 
  {
    printf("%d\n",i);
   
  }
  
  printf("Multiplos de 3\n");


 for(i=3;i<100;i=i+3)
 
  {
    printf("%d\n",i);
  
  }
  
  
  printf("Multiplos de 2 y 3\n");

 
 for(i=6;i<100;i=i+6)
 
    {
     printf("%d\n",i);
    }  
  
  
  
  system("PAUSE");	
  return 0;
}
