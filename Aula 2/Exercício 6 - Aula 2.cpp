//Escreva um programa que receba o valor atual do salário de um funcionário.
//Calcule um aumento de 15%.
//Mostre o valor inicial e o salário com o aumento.

#include <iostream>

using namespace std;

int main(){
	
	float salarioatual, aumento;
	
	cout<<"Digite o valor atual do salário: ";
	cin>>salarioatual;
	
	cout<<"Valor inicial: "<<salarioatual;
	
	aumento=salarioatual + salarioatual * 15/100;
	
	cout<<"\nSalário com aumento: "<<aumento;
	
	getchar();
	return 0;
}
