//Faça um programa que receba 5 valores para um vetor de inteiros
//e mostre os valoes digitados pelo usuário

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	//Vamos criar a variável do tipo vetor
	
	int vetor[5], i;
	
	//Vamos atribuir valores utilizando um laço de repetição
	
	//Sempre começa em 0, ou seja, se forem 5 posições, irá de 0 até 4
	
	//Colocar sempre i< que o número de posições do vetor ou i<= ao número anterior ao número de posições do vetor.
	//Exemplo: i<5 ou i<=4
	for(i=0;i<5;i++){
		cout<<"Digite o valor para a "<<i+1<<"ª posição:\n"; //Coloca-se i+1 para não aparecer "0ª posição" para o leitor, mas ainda sim irá de 0 a 4
		cin>>vetor[i];
	}
	
	//Vamos mostrar os valores com um laço de repetição
	cout<<"\n\nOs dados digitados foram:\n";
	for(i=0;i<5;i++){
		cout<<vetor[i]<<" - ";
	}
	
	return 0;
}
