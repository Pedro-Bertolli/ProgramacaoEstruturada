//Faça um programa que receba o preço de um produto. Depois receba a quantidade que foi comprada do produto.
//Em seguida mostre:
//-o preço digitado
//-a quantidade digitada
//-o valor total a pagar

#include <iostream>

using namespace std;

int main(){
	
	float preco, quantidade, total;
	
	cout<<"Digite o preço do produto: ";
	cin>>preco;
	
	cout<<"Digite a quantidade do produto: ";
	cin>>quantidade;
	
	cout<<"\nO preço do produto: "<<preco;
	
	cout<<"\nA quantidade do produto: "<<quantidade;
	
	total=preco*quantidade;
	
	cout<<"\nO valor total a pagar: "<<total;
	
	getchar();
	return 0;
}
