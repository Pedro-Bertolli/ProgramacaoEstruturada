/*
Uma revendedora de carros usados paga seus a funcion�rios vendedores de um sal�rio fixo por m�s mais 5% sobre o valor das vendas efetuadas.
Escreva um programa que:
-Receba o valor do sal�rio
-Receba o valor total de carros vendidos pelo vendedor
-Calcule e mostre o sal�rio final
*/

#include <iostream>

using namespace std;

int main(){
	
	float salario, cvendidos, percentual, salariofinal;
	
	cout<<"Informe o salario inicial: ";
	cin>>salario;
	
	cout<<"Informe o valor total de carros vendidos: ";
	cin>>cvendidos;
	
	percentual= cvendidos * 5/100;
	salariofinal= salario + percentual;
	
	cout<<"\nValor do sal�rio inicial: "<<salario;
	cout<<"\nValor total de carros vendidos: "<<cvendidos;
	cout<<"\nSal�rio final do funcion�rio: "<<salariofinal;
	
	getchar();
	return 0;
}
