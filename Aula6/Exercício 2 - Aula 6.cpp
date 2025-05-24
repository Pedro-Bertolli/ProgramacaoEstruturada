//Faça um programa que receba 7 notas referente as notas de alunos de uma turma de inglês
//Os valores são reais.
//Calcule e mostre a média das notas da classe


#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float notas[7], soma, media;
	
	for(i=0;i<7;i++){
		cout<<"Informe a nota do "<<i+1<<"º aluno: ";
		cin>>notas[i];
		
		//Vamos somar as notas
		soma = soma + notas[i];
	}
	
	
	media = soma / 7;
	
	cout<<"\nA media das notas e: "<<media;
	
	
	return 0;	
	
}
