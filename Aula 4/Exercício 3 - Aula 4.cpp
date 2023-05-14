//Faça um programa que receba dois números reais e mostre a divisão do primeiro pelo segundo
//Se o segundo for igual a 0, mostrar "divisão impossível"
//Repetir cinco vezes, mostrar o resultado de cada iteração(número de vezes que acontece alguma coisa)

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float n1, n2, divisao;
	//Criar laço de repetição
	for (i=1; i<=5; i++){
		cout<<"Informe o primeiro numero: ";
		cin>>n1;
		
		cout<<"Informe o segundo numero: ";
		cin>>n2;
		
			if (n2 == 0){
			cout<<"\nDivisao Impossivel!";
				}
			else {
				divisao = n1 / n2;
				cout<<"\nO restultado da dividao e: "<<divisao;
			}
			
		system ("PAUSE");
	}
	
	return 0;
	
}

