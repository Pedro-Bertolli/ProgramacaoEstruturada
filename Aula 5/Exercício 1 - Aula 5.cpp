//Fa�a um programa que mostre todos os n�meros divis�veis
//por 5, no intervalo de 1 a 100
#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int contador=1;
	
	while (contador<=100){
		if (contador%5==0){
			cout<<"\n"<<contador;
		}
		
		contador++;
	}
	
	return 0;
}
