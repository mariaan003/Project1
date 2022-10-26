#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "Matrices.hpp"
using std::cout; 
using std::cin; 
using std::endl;
using std::setw;


int main(){
     Matriz matrizA(2,2);
    Matriz matrizB(2,2);
cout<<"Las matrices 1 es: \n";
matrizA.llenar_matriz();
cout<<"La matriz 2 es: \n";
matrizB.llenar_matriz();
 int opcion;
 while (opcion==0)
 {
 	cout<<"Menú de opciones: \n 1.Sumar matrices. \n 2.Multiplicar matrices. \n 3.multiplicar matriz 1 por un escalar. \n 4.multiplicar matriz 2 por un escalar. \n 0. Salir\n";
 	cout<<"Elija su opción:";
	 cin>>opcion;
 	switch(opcion){
 	case 1:
  matrizA.suma_matriz(matrizA,matrizB);
    break;
    case 2:
    	matrizA.multiplicacion_matriz(matrizA,matrizB);
    	break;
    	case 3:
    	matrizA.multiescalar1(matrizA);
    	break;
    	case 4:
		matrizB.multiescalar2(matrizB);	
 		break;	
	 }
break;
 }
	return 0;
}