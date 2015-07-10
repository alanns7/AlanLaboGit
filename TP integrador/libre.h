


typedef struct {
	//Variables
	int size;
	int* elements;

	//Funciones
	int* (*get)();
    int (*indexOf)(); 
    int (*getSize)();
    int (*contains)();
    int (*containsAll)();
    int (*isEmpty)();
    
    void (*add)();
	void (*deleteArrayList) ();
	void (*removee)();
	void (*set)();
	void (*clear)();
    void (*push)();
    
    struct ArrayList* (*pop)();
    struct ArrayList*(*clone)();
    struct ArrayList*(*subList)(); 
    
	
}ArrayList;




ArrayList* newArrayList();

int* get(ArrayList* self,int index);
void add(ArrayList* self,int aux);
int resizeUp(ArrayList* pArray);
void deleteArrayList(ArrayList*);
void removee(ArrayList* self, int index);
void set(ArrayList* self , int index, void* element);
void push(ArrayList* self,int index, void* element);
ArrayList* pop(ArrayList* self , int index);
int indexOf(ArrayList* self , void* element); 
int getSize(ArrayList* self );
int contains(ArrayList* self , void* element);
int containsAll(ArrayList* self , ArrayList* array);
int isEmpty(ArrayList* self );
ArrayList* clone(ArrayList* self);
ArrayList* subList(ArrayList* self, int from, int to );
void clear(ArrayList* self );
