/*
Faça um programa que receba um número qualquer.
Mostre em seguida:
-O valor de seu antecessor
-O valor do número digitado
-O valor de seu sucessor
*/

#include <iostream>

using namespace std;

int main(){
	
	float numero, antecessor, sucessor;
	
	cout<<"Digite um número: ";
	cin>>numero;
	
	antecessor= numero - 1;
	sucessor= numero + 1;
	
	cout<<"\nAntecessor: "<<antecessor;
	cout<<"\nNúmero digitado: "<<numero;
	cout<<"\nSucessor: "<<sucessor;
	
	getchar();
	return 0;
}
