//Um professor precisa calcular a média aritmética de quatro notas
//As notas de cada prova variam de 0 a 10
//Faça um programa utilizando laço de repetição que receba as 4
//notas e mostre a média



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float nota, soma=0, media;
	
	for (i=1; i<=4; i++){
		cout<<"\nInforme sua nota: ";
		cin>>nota;
		
		soma = soma + nota; 
	}
	
	media = soma / 4;
	
	cout<<"\nA media final e: "<<media<<"\n";
	
	system ("PAUSE");
	return 0;
}
