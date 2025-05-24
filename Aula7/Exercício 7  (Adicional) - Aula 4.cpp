//Faça um programa que mostre a tabuada de qualquer número
//Dessa maneira: 7 x 0 = 0, etc



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float numero, conta;
	
	cout<<"Informe o numero do qual voce quer saber a tabuada: ";
	cin>>numero;
	 
	
	for (i=0; i<=10; i++){
		 conta = numero * i;
		 
		 cout<<"\n"<<numero<<" x "<<i<<" = "<<conta<<"\n";
	}
	
	system ("PAUSE");
	return 0;
}
