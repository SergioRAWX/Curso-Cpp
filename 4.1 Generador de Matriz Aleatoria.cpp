
/* GENERA UNA MATRIZ ALEATORIA CON LIMITE DE [100][100] Y DATOS DONDE [9 < valor < 100] */

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
	
	int filas, columnas, dato;
	
	cout<<"\n GENERADOR DE MATRIZ ALEATORIA \n";
	cout<<"Numero de filas: "; cin>>filas;
	cout<<"Numero de columnas: "; cin>>columnas;
	
	int matriz[filas][columnas];
	
	srand(time(NULL));
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			dato=10+rand()%(90);
			//cout<<"CASILLA ["<<i+1<<"]["<<j+1<<"] = "<<dato<<"\n";
			matriz[i][j]=dato;
		}
	}
	
	cout<<"\n IMPRIMIENDO MATRIZ ALEATORIA \n";
	
	
	for(int i=0; i<filas; i++){
		cout<<"\n";
		for(int j=0; j<columnas; j++){
			cout<<matriz[i][j]<<" ";
		}
	}
	
	cout<<"\n\n";
	
	system("pause");
	return 0;
	
}
