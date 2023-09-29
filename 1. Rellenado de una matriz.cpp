#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int filas, columnas;
	
	cout<<"Cuantas filas tiene la matriz?: "; cin>>filas;
	cout<<"Cuantas columans tiene la matriz?: "; cin>>columnas;
	
	int matriz[filas][columnas];
	
	for(int i=0; i<filas; i++){
		for(int x=0; x<columnas; x++){
		  	cout<<"Inserte valor de casilla "<<"["<<i+1<<"]"<<"["<<x+1<<"] :  "; cin>>matriz[i][x];
		}	
	}
	
	cout<<"IMPRIMIENDO MATRIZ \n";
	for(int i=0; i<filas; i++){
		for(int x=0; x<columnas; x++){
		  	cout<<matriz[i][x]<<"   ";
		}
	cout<<"\n";	
	}
	
	
	getch();
	return 0;
}
