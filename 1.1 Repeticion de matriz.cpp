#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	int columnas, filas;
	cout<<"\nDigita el numero de columnas: "; cin>>columnas;
	cout<<"\nDigita el numero de filas: "; cin>>filas;
	
	int matriz[columnas][filas], valor;
	
	for(int i=0; i<columnas; i++){
		for(int j=0; j<filas; j++){
			cout<<"\nInserte valor de espacio "<<"["<<i+1<<"]"<<"["<<j+1<<"]  :"; cin>>valor;
			matriz[i][j]=valor;
		}
	}
	
	cout<<"La matriz seleccionada es la siguiente: \n";
	
	for(int i=0; i<columnas; i++){
		for(int j=0; j<filas; j++){
			cout<<" "<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	getch;
	return 0;
}
