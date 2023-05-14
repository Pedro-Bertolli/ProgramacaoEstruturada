//Faça um programa que leia a idade de uma pessoa expressa em anos, e mostre a idade desta pessoa em "dias". Considere que o ano tem 365 dias.
//Mostre a idade dela em anos e em dias.

#include <iostream>

using namespace std;

int main(){
	
	float n1, n2, idaded, idadea;
	
	cout<<"Digite o ano atual: \n";
	cin>>n1;
	
	cout<<"Digite o seu ano de nascimento: \n";
	cin>>n2;
	
	idadea=n1-n2;
	
	idaded=idadea*365;
	
	cout<<"Idade em anos: "<< idadea;
	cout<<"\nIdade em dias: "<< idaded;
}
