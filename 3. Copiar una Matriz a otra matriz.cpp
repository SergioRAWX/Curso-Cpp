
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	cout<<"PROCESAMIENTO MATRICIAL DE A PARA B"<<endl<<endl;
	int x,y, f, g;
	cout<<"\nDimensiones de matriz\n"<<"\nNumero de columnas: ";cin>>y;
	cout<<"Numero de filas: ";cin>>x;cout<<endl;
	cout<<endl;
	int matriz[x][y];
	
	for(f=0; f<x; f++){
		for(g=0; g<y; g++){
			cout<<"Inserte valor ["<<f+1<<"]["<<g+1<<"] : "; cin>>matriz[f][g];
		}
	}	
	
	int copia[x][y];
	cout<<endl<<"COPIANDO MATRIZ..."<<endl;
	for(f=0; f<x; f++){
		for(g=0; g<y; g++){
			copia[f][g]=matriz[f][g];
		}
	}
	
	cout<<"- El proceso de copiado se ha completa correctamente -"<<endl<<"Matriz almacenada en copia:"<<endl<<endl;
	for(int k=0; k<x; k++){
		for(int l=0; l<y; l++){
			cout<<" "<<copia[k][l];
		}
		cout<<endl;
	}
	
	getch();
	system("pause");
}

