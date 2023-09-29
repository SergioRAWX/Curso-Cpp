#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
	
	int f, c, inf, sup;
	
	cout<<"INSERTE NUMERO DE FILAS: "; cin>>f;
	cout<<"INSERTE NUMERO DE COLUMNAS: "; cin>>c;
	cout<<"INSERTE NUMERO DE VALOR INFERIOR PARA GENERACION ALEATORIA: "; cin>>inf;
	cout<<"INSERTA NUMERO DE VALOR SUPERIOR PARA GENERACION ALEATORIA: "; cin>>sup;
	
	int alfa[f][c], beta[f][c], r[f][c];
	
	srand(time(NULL)); // generador aleatorio de numeros
	
	//rellenando matriz ALFA
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			alfa[i][j]=inf+rand()%(sup+1-inf);
		}
	}
	//rellenando matriz BETA
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			beta[i][j]=inf+rand()%(sup+1-inf);
		}
	}
	
	//sumador de matrices
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			r[i][j]=alfa[i][j]+beta[i][j];
		}
	}
	
	//imprimiento matriz ALFA
	cout<<"\nIMPRIMIENTO MATRIZ ALEATORIA \"A\"\n";
	for(int i=0; i<f; i++){
		cout<<"\n";
		for(int j=0; j<c; j++){
			cout<<alfa[i][j]<<" ";
		}
	}
	cout<<"\n";
	
	//imprimiendo matriz beta
	cout<<"\nIMPRIMIENTO MATRIZ ALEATORIA \"B\"\n";
	for(int i=0; i<f; i++){
		cout<<"\n";
		for(int j=0; j<c; j++){
			cout<<beta[i][j]<<" ";
		}
	}
	cout<<"\n";
	
	//imprimiendo matriz resultado
	cout<<"\nIMPRIMIENTO LA SUMATORIA DE MATRICES  \"A\" + ""\"B\"\n";
	for(int i=0; i<f; i++){
		cout<<"\n";
		for(int j=0; j<c; j++){
			cout<<r[i][j]<<" ";
		}
	}
	cout<<"\n";
	
	getch();
	return 0;
}
