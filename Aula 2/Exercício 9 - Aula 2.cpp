/*
Fa�a um programa que receba um n�mero qualquer.
Mostre em seguida:
-O valor de seu antecessor
-O valor do n�mero digitado
-O valor de seu sucessor
*/

#include <iostream>

using namespace std;

int main(){
	
	float numero, antecessor, sucessor;
	
	cout<<"Digite um n�mero: ";
	cin>>numero;
	
	antecessor= numero - 1;
	sucessor= numero + 1;
	
	cout<<"\nAntecessor: "<<antecessor;
	cout<<"\nN�mero digitado: "<<numero;
	cout<<"\nSucessor: "<<sucessor;
	
	getchar();
	return 0;
}
