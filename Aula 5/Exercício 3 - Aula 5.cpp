//Fa�a um programa para verificar se uma detreminada senha (num�rica)
//digitada est� correta. O usu�rio ter� apenas 3 tentativas.
//Se o usu�rio errar a senha, ent�o mostrar a frase "Voc� tem mais X tentativas", onde X � a quantidade
//restante de tentativas. Se o usu�rio acertar a senha, ent�o mostrar a mensagem "Acesso permitido" e interromper
//a execu��o com o c�digo break




#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	int senha;
	
	while(contador<=3){
		cout<<"\nDigite a senha: ";
		cin>>senha;
		
		if (senha==12345){
			cout<<"ACESSO PERMITIDO!";
			break;
		}
		else if (senha!=12345) {
			cout<<"Voc� tem mais "<<(3-contador)<<" tentativas.";
			}
			
			contador++;	
		}
		
		return 0;
			
	}
	
	
	
