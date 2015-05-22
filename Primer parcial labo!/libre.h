int opciones();
void alta(int limite,int codigoLibro[], char titulo[][80], char autor[][50], int estadoLibro[],int cuenta_alta);
void modifica(int limite,int aux_codigoLibro,int codigoLibro[], char titulo[][80], char autor[][50]);
int existeCodigo(int aux_codigo, int codigo[], int limite);
void prestamo(int estadoLibro[], int aux_codigoLibro,int codigoLibro[], int codigoPrestado[],int limite);
