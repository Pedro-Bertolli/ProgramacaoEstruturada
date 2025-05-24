/*

Crie uma matriz 5x5 com valores aleatórios entre 0 e 150.

Em seguida, solicite para que o usuário digite um número entre 0 e 150.

O programa, então, irá verificar se o número está no conjunto de números
gerados na matriz.

Para cada vez que o número for encontrado na matriz, o usuário vai ganhar 10 reais.

Implemente para que seja mostrado:
- quantas vezes o número escolhido aparecer na matriz
- qual o valor em reais $ o usuário irá ganhar

*/

#include <iostream>
#include <string.h>
#include <locale.h>

//Novas bibliotecas precisam ser incluidas
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	srand(time(NULL));
	
	int matriz[5][5], i, j, sorteio, contarNumero=0, valor=0;
	
	//Vamos criar a matriz 5x5
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matriz[i][j] = rand() %151;
		}
	}
	
	
	cout<<"Digite um número entre 0 e 150: ";
	cin>>sorteio;
	
	
	//Vamos mostrar a matriz
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<matriz[i][j]<<"\t";
		}
	}
	
	//Vamos verificar se o número digitado está no conjunto da matriz
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			//Se o número digitado for igual ao valor da matriz
			if(sorteio==matriz[i][j]){
				valor = valor + 10;
				contarNumero = contarNumero + 1;//Ou poderia colocar "contarNumero++" que daria certo também
			}
		}
	}
	
	
	cout<<"\nO número escolhido apareceu "<<contarNumero<<" na matriz";
	cout<<"\nO valor ganho foi: "<<valor;
	
	
	return 0;	
}
