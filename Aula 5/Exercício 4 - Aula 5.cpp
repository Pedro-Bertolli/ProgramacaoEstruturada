//Fa�a um programa que apresente o total da soma obtido de N 
//n�meros inteiros, onde n � um n�mero digitado pelo usu�rio

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	int numero, soma=0, numero_soma, tot_numeros;
	
	cout<<"Informe quantos n�meros voce deseja somar: ";
	cin>>numero;
	
	while (contador<=numero){
		cout<<"Informe um numero para ser somado: ";
		cin>>numero_soma;
		
		soma= soma + numero_soma;
		
		contador++;
	}
	
	cout<<"O valor da soma e: "<<soma;
	
	return 0;
	
}
