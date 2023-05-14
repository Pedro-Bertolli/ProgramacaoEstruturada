/*
Escreva um algoritmo para ler uma temperatura em graus Fahreinheit e mostrar o valor correspondente em graus celsius

Fórmula:

C = F - 32
_   ______
5     9

*/

#include <iostream>

using namespace std;

int main(){
	
	float tempf, tempc;
	
	cout<<"Informe a temperatura em Fahreinheit: ";
	cin>>tempf;
	
	tempc = 5 * (tempf - 32) / 9;
	
	cout<<"A temperatura em graus Celsius: "<<tempc;
	
	getchar();
	return 0;

}
