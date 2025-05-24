//Faça um programa que receba três notas de um aluno, calcule  e mostre a média aritmética e a mensagem constante na tabela a seguir. 
//Aos alunos que ficaram de exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média é 6.0,
//ou seja, para calcular a nota que o aluno terá que tirar no exame usa-se a fórmula



#include <iostream>

using namespace std;

int main(){
	
	float nota1, nota2, nota3, media, notaExame;
	
	cout<<"Informe sua primeira nota: ";
	cin>>nota1;
	
	cout<<"Informe sua segunda nota: ";
	cin>>nota2;
	
	cout<<"Informe sua terceira nota: ";
	cin>>nota3;
	
	media = (nota1 + nota2 + nota3) /3;
	
	cout<<"MEDIA: "<<media;
	
	if (media >= 6){
		cout<<"\nAPROVADO!\n";
   }
    else if(media < 6 && media >= 3){
    		cout<<"\nEXAME!\n";
    		notaExame= 12 - media;
    		cout<<"\nA nota que você deve tirar no exame é: "<<notaExame<<"\n";
    	}
    	else{
    		cout<<"\nREPROVADO!";
    	}
    	
    	system("PAUSE");
    	return 0;
	}
