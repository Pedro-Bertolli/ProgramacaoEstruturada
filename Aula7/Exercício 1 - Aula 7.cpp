/*

Introduçao de como fazer uma matriz.

*/

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL,"Portuguese");
	
	//Craimos uma matriz 2x2
	int matriz[2][2], i, j;
	
	//Vamos atribuir os valores para a matriz 2x2
	for (i=0;i<2;i++){//Aqui controlamos as linhas
		for(j=0;j<2;j++){//Aqui controlamos as colunas
			//Então fazemos a atribuição
			cout<<"\nDigite o valor: ";
			cin>>matriz[i][j];
		}
	}
	
	//Vamos mostrar os valores lidos
	
	for (i=0;i<2;i++){
		//Adicionar esse "\n" para fazer a matriz ser mostrada de forma correta
		cout<<"\n";
		for (j=0;j<2;j++){
			cout<<" "<<matriz[i][j]; //No lugar do " ", poderia ser colocado o "\t" que é a tabulação, onde apresentará os resultados com mais espaçamento
		}
	}
	
	return 0;
}
