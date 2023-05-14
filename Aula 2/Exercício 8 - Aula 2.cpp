/*
Uma revendedora de carros usados paga seus a funcionários vendedores de um salário fixo por mês mais 5% sobre o valor das vendas efetuadas.
Escreva um programa que:
-Receba o valor do salário
-Receba o valor total de carros vendidos pelo vendedor
-Calcule e mostre o salário final
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
	
	cout<<"\nValor do salário inicial: "<<salario;
	cout<<"\nValor total de carros vendidos: "<<cvendidos;
	cout<<"\nSalário final do funcionário: "<<salariofinal;
	
	getchar();
	return 0;
}
