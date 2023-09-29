
// Este programa imprime la matriz transpuesta para matrices 3x3

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	cout<<"\nMATRIZ TRANSPUESTA\n\n";
	int matriz[3][3];
	
	
	//RELLENADO
	for(int i=0; i<3; i++){ 
		for(int j=0; j<3; j++){
			cout<<"Introduzca el valor de la casilla ["<<i+1<<"]["<<j+1<<"]: "; cin>>matriz[i][j];
		}
	}
	
	//IMPRESION DE MATRIZ ORIGINAL
	cout<<"\nMATRIZ ORIGINAL\n";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
	}
	
	//IMPRESION DE MATRIZ TRANSPUESTA
	cout<<"\n\nMATRIZ TRANSPUESTA\n";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<matriz[j][i]<<" ";
		}
	}
	
	
	
	getch();
	return 0;
}
