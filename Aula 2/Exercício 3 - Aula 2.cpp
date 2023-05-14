//Faça um código para ler as dimensões de um retângulo (base/altura), depois calcular e escrever a área do retângulo

#include <iostream>

using namespace std;

int main(){
	
	float n1, n2, area;
	
	
	cout<<"Digite o valor da base: \n";
	cin>>n1;
	
	cout<<"Digite o valor da altura: \n";
	cin>>n2;
	
	area=n1*n2;
	
	cout<<"Área do retângulo: "<<area;
	
	getchar();
	return 0;
	
	
}
