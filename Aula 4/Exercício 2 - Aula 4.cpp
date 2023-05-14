//Criar um programa com laço de repetição de 7x
//Em cada vez, pedir para digitar um número inteiro e mostrar o número digitado em seguida

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, numero;
	
	for (i=1; i<=7; i++){
		cout<<"\nInforme um numero inteiro: ";
		
		cin>>numero;
		
		cout<<"\nNumero digitado: "<<numero<< ".\n";
		
		system ("PAUSE");
	}
	
	return 0;
}


