//Fa�a um programa que receba tr�s notas de um aluno, calcule  e mostre a m�dia aritm�tica e a mensagem constante na tabela a seguir. 
//Aos alunos que ficaram de exame, calcule e mostre a nota que dever�o tirar para serem aprovados, considerando que a m�dia � 6.0,
//ou seja, para calcular a nota que o aluno ter� que tirar no exame usa-se a f�rmula



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
    		cout<<"\nA nota que voc� deve tirar no exame �: "<<notaExame<<"\n";
    	}
    	else{
    		cout<<"\nREPROVADO!";
    	}
    	
    	system("PAUSE");
    	return 0;
	}
