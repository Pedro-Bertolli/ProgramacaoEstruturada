//Fa�a um programa em que o usu�rio deva digitar 7 n�meros inteiros
//e ent�o mostrar o valor da soma dos n�meros digitados



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
