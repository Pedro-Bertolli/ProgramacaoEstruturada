//Fa�a um programa que receba dois n�meros reais e mostre a divis�o do primeiro pelo segundo
//Se o segundo for igual a 0, mostrar "divis�o imposs�vel"
//Repetir cinco vezes, mostrar o resultado de cada itera��o(n�mero de vezes que acontece alguma coisa)

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float n1, n2, divisao;
	//Criar la�o de repeti��o
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

