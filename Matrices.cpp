#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include "Matrices.hpp"
using std::cout; 
using std::cin; 
using std::endl;

Matriz::Matriz (int mi_nfilas,int mi_ncolumnas){
	nfil= mi_nfilas; 
	nCol= mi_ncolumnas;
	
}

int Matriz::get_filas(){
	return nfil;
}
int Matriz::get_columnas(){
	return nCol; 
}

void Matriz::set_columnas(int nuevo_nCol){
	nCol=nuevo_nCol;
}

void Matriz::set_filas(int nuevo_nfil){
	nfil=nuevo_nfil;
}

void Matriz::llenar_matriz(){
	
ptr_M = new int *[nfil];
for(int i=0 ;i<nfil; i++){
	ptr_M[i]=new int[nCol]; 	}	
	
	srand(time(NULL));

for (int i=0; i<nfil; i++){
	for(int j=0 ; j<nCol; j++){   //mostrar la matriz
	*(*(ptr_M+i)+j)=rand() % 9;
	cout<<*(*(ptr_M+i)+j)<<"  ";
	}
	cout<<"\n";

}
cout<<"\n\n";
}

void Matriz::suma_matriz(Matriz & A ,Matriz & B){
	Matriz suma(A.get_filas(), B.get_columnas());
	cout<<"La suma es"<<endl;
	
for(int i=0 ; i<nfil; i++){
	for(int j=0; j<nCol; j++){
		suma.ptr_M [i][j]= (A.ptr_M [i][j]) + (B.ptr_M[i][j]);
		cout<<suma.ptr_M [i][j]<<" ";
	}
	cout<<"\n";
} 

}

void Matriz::multiplicacion_matriz(Matriz &A, Matriz &B)
{
	int contador;
	Matriz multimat (A.get_filas(), B.get_columnas());
	cout<<"La multiplicación es: ";
	for(int i=0; i<nfil; i++)
	{
		for(int j=0; j<nCol; j++)
		{
			contador=0;
			for(int k; k<nCol; k++)
			{
				contador+=	multimat.ptr_M [i][j] = A.ptr_M[i][k]* B.ptr_M[k][j];
				
				contador=multimat.ptr_M[i][j];
			}
			
		}
		cout<<"\n"; 
	}

}

void Matriz::multiescalar1(Matriz &A)
{int a;
cin>>a; 
Matriz escalar(A.get_filas(), A.get_columnas());
	for(int i=0 ; i<nfil; i++){
	for(int j=0; j<nCol; j++){
		escalar.ptr_M [i][j]= (A.ptr_M [i][j]) * a;
		cout<<escalar.ptr_M [i][j]<<" ";
	}
	cout<<"\n";
}
}
void Matriz::multiescalar2(Matriz &B)
{int a;
cin>>a; 
Matriz escalar2(B.get_filas(), B.get_columnas());
	for(int i=0 ; i<nfil; i++){
	for(int j=0; j<nCol; j++){
		escalar2.ptr_M [i][j]= (B.ptr_M [i][j]) * a;
		cout<<escalar2.ptr_M [i][j]<<" ";
	}
	cout<<"\n";
}
}

