//Escreva um programa que receba o valor atual do sal�rio de um funcion�rio.
//Calcule um aumento de 15%.
//Mostre o valor inicial e o sal�rio com o aumento.

#include <iostream>

using namespace std;

int main(){
	
	float salarioatual, aumento;
	
	cout<<"Digite o valor atual do sal�rio: ";
	cin>>salarioatual;
	
	cout<<"Valor inicial: "<<salarioatual;
	
	aumento=salarioatual + salarioatual * 15/100;
	
	cout<<"\nSal�rio com aumento: "<<aumento;
	
	getchar();
	return 0;
}
