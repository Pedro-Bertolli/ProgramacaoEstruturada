//Fa�a um programa que calcule o fatorial de um n�mero fornecido pelo usu�rio
//Entretanto, o n�mero deve estar no intervalo de 0 a 10.
//Dica: o fatorial � calculado como segue:
//4! = 1x2x3x4 = 24
//6! = 1x2x3x4x5x6 = 720



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	int numero, fatorial=1; 
	
	cout<<"Informe o numero que deseja calcular o fatorial: ";
	cin>>numero;
	
	if (numero>=0 && numero<=10){
		
	while(contador<=numero){
		fatorial = fatorial * contador;
		
		
		
		contador++;
	}
  }
  else {
  	cout<<"Nao sera possivel calcular o fatorial desse numero!";
  }
	if (numero>=0 && numero<=10){
		cout<<"O fatorial e: "<<fatorial;
	}
	
	return 0;
	
	
	
	
	
	
	
	
	
	
}
