//Criar um programa com la�o de repeti��o de 7x
//Em cada vez, pedir para digitar um n�mero inteiro e mostrar o n�mero digitado em seguida

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


