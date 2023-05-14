/*
Faça um programa que receba as notas de 3 provas.
Calcule a média aritmética.
*/

#include <iostream>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, media;
	
	cout<<"Informe a primeira nota: ";
	cin>>nota1;
	
	cout<<"Informe a segunda nota: ";
	cin>>nota2;
	
	cout<<"Informe a terceira nota: ";
	cin>>nota3;
	
	media= (nota1 + nota2 + nota3) / 3;
	
	cout<<"Media Aritmética: "<<media;
	
	getchar();
	return 0;
}
