/*

Faça um programa que crie uma matriz 7x5 com números inteiros criados aleatoriamente.

Em seguida, some os elementos de cada linha e armazene a soma de cada linha em um vetor.

Em seguida, o programa deverá multiplicar cada elemento da matriz pela soma da linha correspondente no vetor.

-mostre a matriz gerada
-mostre o vetor com a soma das linhas
-mostre a matriz resultante

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
	
	int matriz[7][5], vetor[7], i, j, soma=0, matrizR[7][5];
	
	for(i=0;i<7;i++){
		for(j=0;j<5;j++){
			matriz[i][j] = rand() %11;
			soma = soma + i;
			vetor[i] = soma;
		}
	}
	
	cout<<"Matriz Original: ";
	for(i=0;i<7;i++){
		cout<<"\n";
		for(j=0;j<5;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	cout<<"\n\nMatriz Resultante: ";
	for(i=0;i<7;i++){
		cout<<"\n";
		for(j=0;j<5;j++){
			matrizR[i][j] = matriz[i][j] * vetor[i];
			cout<<matrizR[i][j]<<"\t";
		}
	}
	
	cout<<"\nVetor: ";
	for(i=0;i<7;i++){
		cout<<vetor[i]<<" ";
	}
	
	
	
	
	
	
	
	
	return 0;
}
