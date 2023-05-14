//Faça um programa para verificar se uma detreminada senha (numérica)
//digitada está correta. O usuário terá apenas 3 tentativas.
//Se o usuário errar a senha, então mostrar a frase "Você tem mais X tentativas", onde X é a quantidade
//restante de tentativas. Se o usuário acertar a senha, então mostrar a mensagem "Acesso permitido" e interromper
//a execução com o código break




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
			cout<<"Você tem mais "<<(3-contador)<<" tentativas.";
			}
			
			contador++;	
		}
		
		return 0;
			
	}
	
	
	
