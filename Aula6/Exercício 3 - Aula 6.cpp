//Fa�a um programa que receba 2 vetores de 4 posi��es de n�meros reais
//Calcule a soma dos valores referentes a cada posi��o e
//armazene num terceiro vetor na mesma posi�ao


#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL,"Portuguese");
	
	float vetor1 [4], vetor2[4], resultado[4];
	int i;
	
	//Vamos receber os valores
	for(i=0;i<4;i++){
		cout<<"Digite um n�mero para a "<<i+1<<"� posicao do 1� vetor: ";
		cin>>vetor1[i];
	}
	
	for(i=0;i<4;i++){
		cout<<"Digite um n�mero para a "<<i+1<<"� posicao do 2� vetor: ";
		cin>>vetor2[i];
	}
	
	//Vamos somar
	for(i=0;i<4;i++){
		resultado[i] = vetor1[i] + vetor2[i];
	
	//Vamos mostrar o resultado
	cout<<resultado[i]<<" - ";
	}
	
	return 0;
	
}
