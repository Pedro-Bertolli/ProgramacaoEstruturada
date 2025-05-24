/*
O custo de um carro novo ao consumidor é a soma do custo da fábrica mais a porcentagem do distribuidor e dos impostos (aplicado ao custo da fábrica).
Supondo que o percentual do distribuidor seja 13%, e os impostos de 18%, escrever um programa para ler:
-Custo de fábrica

Mostrar:
-Custo digitado
-Valor do percentual do distribuidor
-Valor do imposto
-Valor total final
*/

#include <iostream>

using namespace std;

int main(){
	
	float custof, percdis, percimp, total; 
	
	cout<<"Digite o custo de fábrica do carro: ";
	cin>>custof;
	
	percdis= custof * 13/100;
	percimp= custof * 18/100;
	total= custof + percdis + percimp;
	
	cout<<"\nCusto de fábrica: "<<custof;
	cout<<"\nValor do percentual do distribuidor: "<<percdis;
	cout<<"\nValor do imposto: "<<percimp;
	cout<<"\nO valor total final do carro: "<<total;
	
	getchar();
	return 0;
}
