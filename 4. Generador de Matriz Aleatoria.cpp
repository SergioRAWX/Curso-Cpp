#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(){
	cout<<"GENERADOR DE MATRIZ ALEATORIA"<<endl<<endl;
	int x,y, al;
	cout<<"\nDimensiones de matriz\n"<<"\nNumero de columnas: ";cin>>y;
	cout<<"Numero de filas: ";cin>>x;cout<<endl<<endl;
	int matriz[x][y];
	
	srand(time(NULL)); // comando para abrir el generador de numeros aleatorios
	for(int q=0; q<x; q++){
		for(int w=0; w<y; w++){
			al=1+rand()%(100);
			matriz[q][w]=al;
		}
	}	
	

	cout<<endl<<"Matriz aleatoria generada: "<<endl;
	for(int q=0; q<x; q++){
		for(int w=0; w<y; w++){
			cout<<" "<<matriz[q][w];
		}
		cout<<endl;
	}
	
	
	getch();
	system("pause");
}

