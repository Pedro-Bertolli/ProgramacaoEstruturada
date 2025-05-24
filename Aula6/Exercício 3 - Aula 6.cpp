//Faça um programa que receba 2 vetores de 4 posições de números reais
//Calcule a soma dos valores referentes a cada posição e
//armazene num terceiro vetor na mesma posiçao


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
		cout<<"Digite um número para a "<<i+1<<"ª posicao do 1º vetor: ";
		cin>>vetor1[i];
	}
	
	for(i=0;i<4;i++){
		cout<<"Digite um número para a "<<i+1<<"ª posicao do 2º vetor: ";
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
