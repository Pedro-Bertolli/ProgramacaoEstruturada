//Fa�a um programa que passe por um la�o 100 vezes e mostre apenas os n�meros �mpares inteiros.
//num%2 != 0 --> �mpar






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
