/*

Faça um programa que crie uma matriz 4x2.

Preencha com valores aleatórios entre 0 e 12.

Calcule a matriz resultante da multiplicação dos elementos da matriz criada pelo seu maior elemento.

Mostrar as duas matrizes e o maior elemento.

*/

#include <iostream>
#include <string.h>
#include <locale.h>


#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	srand(time(NULL));
	
	int matriz[4][2], i, j, maior=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			matriz[i][j] = rand () %13;
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
			}
		}
	}
	
	cout<<"Matriz Original: ";
	for(i=0;i<4;i++){
		cout<<"\n";
		for(j=0;j<2;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	cout<<"\n\nMatriz Resultante: ";
	for(i=0;i<4;i++){
		cout<<"\n";
		for(j=0;j<2;j++){
			cout<<matriz[i][j] * maior<<"\t";	
		}
	}
	
	cout<<"\n\nO maior valor e: "<<maior;
	
	
	return 0;	
}
