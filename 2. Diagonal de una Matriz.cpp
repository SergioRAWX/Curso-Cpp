#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int x,y;
	
	cout<<"ESTE PROGRAMA IMPRIME LA DIAGONAL DE UNA MATRIZ"<<"\n"<<endl << "- RELLENADO DE MATRIZ -"<<endl;
	cout<<"Cuantas columnas tiene tu matriz?: "; cin>>y;
	cout<<"Cuantas filas tiene tu matriz?: "; cin>>x; cout<<"\n";
	int matriz[x][y], valor;
	
	
	for(int i=0; i<x;i++){ /*ESTE CICLO DE REPETICION RELLENA LAS FILAS Y COLUMNAS*/
		for(int j=0; j<y; j++){
		cout<<"Inserte valor para ["<<i+1<<"]["<<j+1<<"] : "; cin>>valor;
		matriz[i][j]=valor;
		}
	}
	
	cout<<"\nDIAGONAL DE LA MATRIZ\n\n";
    int f=0;
	for(int g=0; g<x; g++){
		do{
			cout<<matriz[g][f];
			cout<<"\n";
			for(int m=0; m<g+1; m++){
				cout<<"  ";
			}
		f++;	
		}while(f<=g);
	}
	
	
	
	getch();
	system("pausa");
	
}
