#include <iostream>
#include <iomanip>
#include <time.h>
using std::cout; 
using std::cin; 
using std::endl;

class Matriz{
	
	public: 
	
	Matriz (int ,int);
	int get_filas();
	int get_columnas();
	
	void set_filas(int); 
	void set_columnas(int);
	void pedirDatos();
	
	void llenar_matriz();
	
	void suma_matriz(Matriz &, Matriz&);
	void multiplicacion_matriz(Matriz &, Matriz &);
	
	
	
	
	
	
	

	
	
	
	private: 
	int  **ptr_M,nfil, nCol; 

};