#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	//Vamos declarar as vari�veis
	float altura; //em cent�metros
	//Vamos declara uma vari�vel string
	char nome[30]; //s�o espa�os dentro de um vetor, onde ser�o inseridas as letras desse nome
	float pesoIdeal;
	char sexo[1];
	
	//Vamos receber esses valores
	
	cout<<"Digite seu nome:\n ";
	cin>>nome;
	
	cout<<"\nDigite sua altura:\n";
	cin>>altura;
	
	cout<<"\nDigite o seu sexo: \n";
	cin>>sexo;
	
	//Vamos verificar se o valor digitado � M ou F
	if (strcmp(sexo,"M")==0){
		pesoIdeal=(72.7 * altura) - 58;
		cout<<"O seu peso ideal masculino �: "<<pesoIdeal<<"Kg/n.";
	}
	else{
		pesoIdeal=(62.1 * altura) - 44.7;
		cout<<"O seu peso ideal feminimo �: "<<pesoIdeal<<"Kg/n.";	
	}
	
	system("PAUSE");
	return 0;
		

	
}
