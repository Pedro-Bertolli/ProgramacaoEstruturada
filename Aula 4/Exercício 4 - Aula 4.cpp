//Faça um programa que passe por um laço 100 vezes e mostre apenas os números ímpares inteiros.
//num%2 != 0 --> ímpar






#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	
	for (i=1; i<=100; i++){
		
		if (i%2 != 0){
			cout<<"\nNumero: "<<i;
		}
	}
	
	system ("PAUSE");
	return 0;
	
	
	
}
