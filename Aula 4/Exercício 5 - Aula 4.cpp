//Faça um programa em que o usuário deva digitar 7 números inteiros
//e então mostrar o valor da soma dos números digitados



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, numero, soma = 0;
	
	for (i=1; i<= 7; i++){
		cout<<"\nDigite um  numero: ";
		cin>>numero;
		
		soma = soma + numero;		
	}
	
	cout<<"\nO valor da soma: "<<soma<<"\n";
	
	system ("PAUSE");
	return 0;
}
