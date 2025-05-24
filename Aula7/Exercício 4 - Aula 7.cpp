/*

Faça um programa que receba os valores de uma matriz 2x3 e escreva a localização (linha e coluna)
do maior valor.

Crie os números aleatoriamente entre 1 e 200.

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
	
	int matriz[2][3], i, j, maiorValor=0, posI, posJ;
	
	//Cria a matriz e já define o número maior
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			matriz[i][j] = (rand() %200)+1;
				if(matriz[i][j] > maiorValor){
		    		maiorValor = matriz[i][j];
		    		posI = i;
		    		posJ = j;
			}
		}
	}
	
	for(i=0;i<2;i++){
		cout<<"\n";
		for(j=0;j<3;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}

	
	cout<<"\nO maior valor e "<<maiorValor<<" e esta na linha "<<posI<<" e coluna "<<posJ;






	return 0;
}
