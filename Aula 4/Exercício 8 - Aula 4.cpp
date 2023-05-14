//Faça um programa que mostre todos os números divisíveis por 3 no intervalo de 50 a 200.



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i; 
	
	for (i=50; i<=200; i++){
		if (i%3 == 0){
			cout<<"Divisivel: "<<i<<"\n";
		}
	}
		
		system ("PAUSE");
		return 0;
	}

	
	
