#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	//Vamos declarar as variáveis
	float altura; //em centímetros
	//Vamos declara uma variável string
	char nome[30]; //são espaços dentro de um vetor, onde serão inseridas as letras desse nome
	float pesoIdeal;
	char sexo[1];
	
	//Vamos receber esses valores
	
	cout<<"Digite seu nome:\n ";
	cin>>nome;
	
	cout<<"\nDigite sua altura:\n";
	cin>>altura;
	
	cout<<"\nDigite o seu sexo: \n";
	cin>>sexo;
	
	//Vamos verificar se o valor digitado é M ou F
	if (strcmp(sexo,"M")==0){
		pesoIdeal=(72.7 * altura) - 58;
		cout<<"O seu peso ideal masculino é: "<<pesoIdeal<<"Kg/n.";
	}
	else{
		pesoIdeal=(62.1 * altura) - 44.7;
		cout<<"O seu peso ideal feminimo é: "<<pesoIdeal<<"Kg/n.";	
	}
	
	system("PAUSE");
	return 0;
		

	
}
