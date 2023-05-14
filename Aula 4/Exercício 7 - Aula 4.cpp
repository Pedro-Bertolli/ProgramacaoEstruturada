//Faça um programa que mostre a tabuada do 7
//Dessa maneira: 7 x 0 = 0, etc



#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float conta;
	
	for (i=1; i<=10; i++){
		 conta = 7 * i;
		 cout<<" 7 x "<<i<<" = "<<conta<<"\n";
	}
	
	system ("PAUSE");
	return 0;
}
