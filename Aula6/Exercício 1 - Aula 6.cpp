//Fa�a um programa que receba 5 valores para um vetor de inteiros
//e mostre os valoes digitados pelo usu�rio

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	//Vamos criar a vari�vel do tipo vetor
	
	int vetor[5], i;
	
	//Vamos atribuir valores utilizando um la�o de repeti��o
	
	//Sempre come�a em 0, ou seja, se forem 5 posi��es, ir� de 0 at� 4
	
	//Colocar sempre i< que o n�mero de posi��es do vetor ou i<= ao n�mero anterior ao n�mero de posi��es do vetor.
	//Exemplo: i<5 ou i<=4
	for(i=0;i<5;i++){
		cout<<"Digite o valor para a "<<i+1<<"� posi��o:\n"; //Coloca-se i+1 para n�o aparecer "0� posi��o" para o leitor, mas ainda sim ir� de 0 a 4
		cin>>vetor[i];
	}
	
	//Vamos mostrar os valores com um la�o de repeti��o
	cout<<"\n\nOs dados digitados foram:\n";
	for(i=0;i<5;i++){
		cout<<vetor[i]<<" - ";
	}
	
	return 0;
}
